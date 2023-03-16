#include <unistd.h>
/**
 * main - main function that prints msg to sterr without printf or puts
 * Return: 1 
 */
int main(void)
{
	write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
