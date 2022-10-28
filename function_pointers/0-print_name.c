/**
  * print_name - prints a name.
  * @name: String which is the name.
  * @f: Function pointer to uppercase name function or as passed name.
  *
  */

void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
