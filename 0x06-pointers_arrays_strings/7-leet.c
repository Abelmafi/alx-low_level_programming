#include "main.h"
#include <stdio.h>
/**
 * leet - encode text
 * @str: string to be encoded
 * Return: char.
 */
char *leet(char *str)
{
	char a[] = "aeotl";
	char b[] = "AEOTL";
	char c[] = "43071";
	int i, j = 0;

	while (str[j])
	{
		for (i = 0; i < 5; i++)
		{
			if (str[j] == a[i] || str[j] == b[i])
			{
				str[j] = c[i];
			}
		}
		j++;
	}
	return (str);
}
