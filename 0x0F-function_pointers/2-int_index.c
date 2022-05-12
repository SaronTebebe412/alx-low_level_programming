#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - main
 * @array: var 1
 * @size: var 2
 * @cmp: var 3
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;
	bool y;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		for (index = 0; index < size; index++)
		{
			y = cmp(array[index]);
			if (y == TRUE)
				return (index);
		}
	}
	return (-1);
}
