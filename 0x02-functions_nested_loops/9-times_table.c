#include "main.h"
/**
 * times_table - prints the nine times table.
 */
void times_table(void)
{
		int i;
			int j;
				int k;

			for (i = 1;  i <= 9; i++)
			{
				for (j = 0; j <= 59; j++)
				{
					k = i * j;
					_putchar(k);
					_putchar(',');
					_putchar(' ');
				}
			}
}

