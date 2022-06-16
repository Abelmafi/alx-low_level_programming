#include "main.h"
#include <stdio.h>

/**
 * rot13 - rotate alphabet
 * @str: string to be shifted
 * Return: char.
 */

char *rot13(char *str)
{
	int i, j = 0;
	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	while (str[j] != '\0')
	{
		for (i = 0; c[i] != '\0'; i++)
		{
			if (str[j] == c[i])
			{
				str[j] = r[i];
				break;
			}
		}
	j++;
	}
	return (str);
}
