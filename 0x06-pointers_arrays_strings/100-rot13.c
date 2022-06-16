#include "main.h"
#include <stdio.h>

/**
 * rot13 - rotate alphabet
 * @str: string to be shifted
 * Return: char.
 */

char *rot13(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		if ((str[j] >= 'a' && str[j] <= 'z') || (str[j] >= 'A' && str[j] <= 'Z'))
		{
			if (str[j] > 'm' || (str[j] > 'M' && str[j] <= 'Z'))
			{
				str[j] -= 13;
			}
			else
			{
				str[j] += 13;
			}
		}
		j++;
	}
	return (str);
}
