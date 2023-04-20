#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add op function
 * @a: int
 * @b: int
 *
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub ob function
 * @a: int
 * @b: int
 *
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mul op function
 * @a: int
 * @b: int
 *
 * Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div op function
 * @a: int
 * @b: int
 *
 * Return: int
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - mod op function
 * @a: int
 * @b: int
 *
 * Return: int
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
