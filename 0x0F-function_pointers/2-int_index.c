#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to serch through
 * @size: size of array
 * @cmp: function used to compare
 * Return: first index for which cmp doesn't return 0, or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int h, p;

	if (size > 0 && array && cmp)
	{
		for (h = 0; h < size; h++)
		{
			r = cmp(array[h]);
			if (p)
				break;
		}
		if (h < size)
			return (h);
	}
	return (-1);
}

