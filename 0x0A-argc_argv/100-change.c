#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints the minimum number of coins to make change
 * @argc: argument count
 * @argv: argument value
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int cents;
	int quarters, dimes, nickles, two_cents, pennies;
	int change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents > 0)
	{
		quarters = (cents / 25);
		dimes = (cents - (quarters * 25)) / 10;
		nickles = (cents - (quarters * 25) - (dimes * 10)) / 5;
		two_cents = (cents - (quarters * 25) - (dimes * 10) - (nickles * 5)) / 2;
		pennies = cents - (quarters * 25) - (dimes * 10) -
			(nickles * 5) - (two_cents * 2);
		change = quarters + dimes + nickles + two_cents + pennies;

		printf("%d\n", change);
		return (0);
	}
	printf("%d\n", 0);
	return (0);
}
