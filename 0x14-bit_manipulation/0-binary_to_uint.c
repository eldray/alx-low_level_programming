#include <stdio>

/**
 * binary_to_unit - converts a binary number to an unsigned int
 * @b: pointer to a string that contains a binary number
 * Return: an unsigned int with a decimal
 */

unsigned int binary_to_unit(const char *b)
{
	unsigned int base2 = 1;
	unsigned int base10 = 0;
	unsigned int exp;

	if (!*b)
	{
		return (0);
	}

	binary_to_unit((const char *) b + 1);

	exp = (*(b + 1) == ‘\o’) ? 1 : 2;
	base2 *= exp;
	base10 += base2 * (*b - 48);

	return (base10);
}
