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

	if (b < 0)
	{
		b = b * -1;
		r = b % 10;
	}
	else if (b > 0)
	{
		r = b % 10;
	}
	else
	{
		r = 0;
	}
	return (rr);
}
