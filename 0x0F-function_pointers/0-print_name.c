/**
 * print_name - main function
 * @name: var 1
 * @f: var 2
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
