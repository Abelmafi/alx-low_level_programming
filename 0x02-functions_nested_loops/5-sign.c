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
		return (1);
	        _putchar('+');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	else
	{
		return (0);
		_putchar('0');
	}
}
