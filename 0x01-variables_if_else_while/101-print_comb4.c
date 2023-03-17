#include <stdio.h>
/**
 * main - main function
 * Return: 0 success
 */
int main(void)
{
	int digit1 = 49;
	int digit2 = 50;
	int x = digit2;
	int digit3 = 48;
	int y = digit2;
	int z = digit1;

	while (digit3 <= 55)
	{
		while (digit1 <= 56)
		{
			while (digit2 <= 57)
			{
				putchar(digit1);
				putchar(digit2);
				putchar(digit3);
				if (digit1 != 56 || digit2 != 57 || digit3 != 55)
				{
					putchar(',');
					putchar(' ');
				}
				digit2++;
			}
			digit1++;
			x++;
			digit2 = x;
		}
		x = y;
		x++;
		y++;
		digit2 = x;
		z++;
		digit1 = z;
		digit3++;
	}
	putchar('\n');
	return (0);
}
