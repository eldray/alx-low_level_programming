#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change for an amount of money.
 *
 *  @argc: number of arguments passed to the function
 *
 *  @argv: argument vector of pointers to strings
 *
 *  Return: 0 if no errors, else 1
 */

int main(int argc, char *argv[])
{
	/*Declaring variables*/
	int position, total, change, aux;
	int coins[] = {25, 10, 5, 2, 1}; /*Array int*/

	position = total = change = aux = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	total = atoi(argv[1]); /*Covert str to int*/

	if (total <= 0)
	{
		printf("0\n");
		return (0);
	}
	/*Declaring While*/
	while (coins[position] != '\0')
	{
		if (total >= coins[position])
		{
			aux = (total / coins[position]);
			change += aux;
			total -= coins[position] * aux;
		}
		position++;
	}

	printf("%d\n", change)
	return (0);
}
