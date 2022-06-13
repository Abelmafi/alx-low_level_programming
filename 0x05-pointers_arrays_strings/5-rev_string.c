#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverse string
 * @s: string
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int len, temp, j;

	len = strlen(s);
	for (j = 0; j < len / 2; j++)
	{
		temp = s[j];
		s[j] = s[len - j - 1];
		s[len - j - 1] = temp;
	}

}
