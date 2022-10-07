#include <stdlib>

/*
 * *malloc-cheked - allocates memory to the checker
 * @b : buffer size
 * Return: buffer to print
 */

void * malloc-checked(unsigned int b)
{
	void *p
	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
