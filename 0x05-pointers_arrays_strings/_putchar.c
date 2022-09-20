#include "main.h"
#include <unistd.h>

/**
 *_putchar - Writes to stdout
 *
 * @c: Character
 *
 * Return: 0 on Success, else return 1
 */



int _putchar(char c)

{

		return (write(1, &c, 1));

}
