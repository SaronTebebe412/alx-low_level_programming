#include <stdio.h>

/**
 * main - entry
 * @argc: length of command line input
 * @argv: array of command line argument
 * Return: 0 if success
 */
int main(int argc, char const *argv[])
{
	printf("%s\n", argv[argc - argc]);

	return (0);
}
