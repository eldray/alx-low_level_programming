#include "main.h"

/**
 * _strlen - Checks the length of a string
 *
 *  @s: The string to be evaluated
 *
 *  Return: Length of @s
 */

int _strlen(char *s)

{
		int len = 0;

		while (*s++)

	{
		len++;
	}
			return (len);

}
