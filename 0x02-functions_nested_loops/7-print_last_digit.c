#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - check the code
 *
 * @a: absolute value
 *
 * Return: Always 0.
 */
int print_last_digit(int a)
{
	if ((a % 10) >= 0)
	{
		_putchar('0' + (a % 10));
		return (a % 10);
	}
	else
	{
		_putchar('0' + (-1 * (a % 10)));
		return ((-1 * (a % 10)));
	}
}

