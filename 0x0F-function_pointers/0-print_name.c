/**
 * print_name - function that prints a name.
 *
 * @name: string to print
 * @f: function pointer that does print name
 *
 * Return: nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
