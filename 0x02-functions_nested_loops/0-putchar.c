#include "main.h"
/**
 * main - main function that prints msg
 * Return: 0 success
 */
int main(void)
{
	int i = 0;
	char msg[] = "_putchar\n";

	while (msg[i] != \0)
	{
		_putchar(msg[i]);
		i++;
	}
	return (0);
}
