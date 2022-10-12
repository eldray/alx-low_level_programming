#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @h: function to print with
 * 
 * Return: void
 */
void print_name(char *name, void (*h)(char *))
{
	if (name != NULL && h != NULL)
		h(name);
}
