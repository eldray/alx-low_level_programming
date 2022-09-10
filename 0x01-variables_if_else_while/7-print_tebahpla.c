#include <stdio.h>

/**
 * main - Prints reversed lowercase alphabet.
 *
 * Return: Always o (Success)
 */
int main(void)
{
	char alpha;
	for (alpha = 'z'; alpha >= 'a'; alpha--)

	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
