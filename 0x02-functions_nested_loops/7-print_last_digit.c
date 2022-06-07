#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - check the code
 *
 *@b: absolute value
 *
 * Return: Always 0.
 */
int print_last_digit(int b)
{
	int r;

	if (b >= 0)
	{
		r = b % 10;
	}
	else 
	{
		b = -1 * b;
		r = b % 10;
	}
	_putchar('0' + r);
	return (r);
}
