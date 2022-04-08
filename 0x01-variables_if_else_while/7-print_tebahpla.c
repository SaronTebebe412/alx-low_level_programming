#include <stdio.h>
#include <stdlib.h>
/**
 * main - Main worker
 * Return: value passer
 */
int main(void)
{
	char lcase = 'a';

	for (lcase = 'z'; lcase >= 'a'; lcase--)
	{
		putchar(lcase);
	}
	putchar('\n');
	return (0);
}

