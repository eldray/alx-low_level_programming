#include "main.h"
#include <stdlib>

/*
 * malloc_checked: allocates memory to the malloc
 * @b : buffer size
 * Return: A pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);
return (mem);
}
