#include "main.h"
#include <stdio.h>

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

		while (*(src + inc) != '\0')
		{
			*(dest + inc) = *(src + inc);
			index++;
		}
		*(dest + inc) = '\0';

		return (dest);
}
