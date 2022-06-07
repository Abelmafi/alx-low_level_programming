#include <stdio.h>
#include "main.h"
/**
 *print_sign - prints the sign
 *
 *@c: is intiger
 *
 *Returns: nothing
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
