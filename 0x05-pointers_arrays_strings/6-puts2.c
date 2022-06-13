#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - reverse string
 * @str: string
 * Return: Always 0.
 */
void puts2(char *str)
{
	int len, i;

	len = strlen(str);

	for (i = 0; i < len; i = i + 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
