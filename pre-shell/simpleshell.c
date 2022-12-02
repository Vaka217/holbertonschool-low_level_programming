#include "main.h"

int main(void)
{
	int status, i;
	ssize_t f;
	size_t count = 0;
	char **argv;
	char *buf = NULL, *token, *dup;
	pid_t child_pid;

	while (1)
	{
		if (isatty(STDIN_FILENO) == 1)
			write(1, "$ ", 2);
		f = getline(&buf, &count, stdin);
		if (f == -1 || buf == NULL)
		{
			free(buf);
			return (-1);
		}
		buf[f - 1] = '\0';
		if (_strcmp(buf, "exit") == 0)
		{
			free(buf);
			return (0);
		}
		if (_strcmp(buf, "env") == 0)
			_printenv();
		argv = malloc(sizeof(char *));
		dup = _strdup(buf);
		token = strtok(dup, " ");
		argv[0] = token;
		for (i = 1; token; i++)
		{
			token = strtok(NULL, " ");
			argv = _realloc(argv, i * 8, (i + 1) * 8);
			argv[i] = token;
		}
		argv = _realloc(argv, i * 8, (i + 1) * 8);
		argv[i] = NULL;
		child_pid = fork();
		if (child_pid == -1)
			return (-1);
		if (child_pid == 0)
		{
			if ((_strcmp(buf, "env") != 0) && execve(pathfinder(argv[0]), argv, environ) == -1)
			{
				free(buf);
				free(dup);
				free(argv);
				perror("./hsh");
				return (-1);
			}
			return (0);
		}
		else
		{
			free(dup);
			free(argv);
			wait(&status);
		}
	}
	return (0);
}
