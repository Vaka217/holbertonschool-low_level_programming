#ifndef main_h
#define main_h

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>

char *_strcat(char *dest, char *src);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
char *_strdup(char *str);
void _printenv(void);
char *pathfinder(char *str);
char *_getenv(const char *name);
void _printenv(void);
char *pathfinder(char *str);
void *_realloc(void *ptr, size_t originalLength, size_t newLength);
void _memcpy(void *dest, void *src, size_t n);
extern char **environ;

#endif
