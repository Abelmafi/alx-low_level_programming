#include "main.h"
#include <stdio.h>

/**
 * cap_string - check the code
 * @str: string to be changed
 * Return: char.
 */

char *cap_string(char *str)
{
	int i = 1;
	int j = 0;
	char c[] = " \t\n,;.!?\"(){}";

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 'a' - 'A';
	while (str[i] != '\0')
	{
		for (j = 0; c[j] != '\0'; j++)
			if (str[i - 1] == c[j] && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= ('a' - 'A');
		i++;
	}
	return (str);
}

