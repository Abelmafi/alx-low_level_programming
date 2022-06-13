#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* print_rev - check the code
* @s: a pointer the integer we want to set to 98
*
* Return: Always 0.
*/
void print_rev(char *s)
{
	int len, i = 0;

	len = strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
