#include "main.h"
#include <stdio.h>

/**
* reset_to_98 - check the code
* @n: a pointer the integer we want to set to 98
*
* Return: Always 0.
*/
void reset_to_98(int *n)
{
	*n = 98;
	_putchar('0' + (*n / 10));
	_putchar('0' + (*n % 10));
}
