#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: var 1
 * @argv: var 2
 *
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int i, y;
	char *ptr = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	y = atoi(argv[1]);
	if (y < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < y; i++)
	{
		printf("%02x", ptr[i] & 0xFF);
		if (i != y - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
