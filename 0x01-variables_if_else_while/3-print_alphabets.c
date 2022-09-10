#include <stdio.h>
/**
 *main - print alphabet in upper and lower
 *
 * Return: zero
 */
int main(void)
{
	char alpha, ALPHA;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	for (ALPHA = 'A'; ALPHA <= 'Z'; ALPHA++)
		putchar(ALPHA);
	putchar('\n');
	return (0);
}
