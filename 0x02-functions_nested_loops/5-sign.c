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
	char a;
	if (n > 0)
	{
		return (1);
		a = '+';
	        putchar(a);
	}
	else if (n < 0)
	{
		return (-1);
		a = '-';
		_putchar(a);
	}
	else
	{
		return (0);
		putchar('0');
	}
}
