#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * string_toupper - check the code
 * @str: string to be changed
 * Return: char.
 */
char *string_toupper(char *str)
{
	int j = 0;

	while (str[j])
	{
		if ((str[j] >= 'a') && (str[j] <= 'z'))
		{
		str[j] -= 'a' - 'A';
		}
		j++;
	}
}