#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * a function that creates an array of chars
 * and initializes it with a specific char
 *
 * Returns: Pointer to @char array
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size > 0)
	{
		p = malloc(size * sizeof(char));

	if (p == NULL)

	return (NULL);
	}

	else
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
