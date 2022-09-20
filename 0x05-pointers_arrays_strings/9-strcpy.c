#include "main.h"

/**
 *  _strcpy - Copy a string
 *
 *  @dest: Buffer to copy string to
 *
 *  @src: Source string
 *
 *  Return: Pointer
 */

char *_strcpy(char *dest, char *src)

{
	int index = 0;


		while (src[index])
		{
			dest[index] = src[index];
			index++;
		}


		return (dest);
}
