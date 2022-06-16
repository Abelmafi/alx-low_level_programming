#include "main.h"
#include <stdio.h>

/**
 * cap_string - check the code
 * @str: string to be changed
 * Return: char.
 */

char *cap_string(char *str)
{
	int j = 0;

	while (str[j])
	{
		if (str[j] == '\n' || str[j] == '	' || str[j] == ' ' || str[j] == ',')
			{
			if (str[j + 1] >= 'a' && str[j + 1] <= 'z')
			{
				str[j + 1] -= 'a' - 'A';
			}
			}
		else if (str[j] == ';')
			{
			if (str[j + 1] >= 'a' && str[j + 1] <= 'z')
			{
				str[j + 1] -= 'a' - 'A';
			}
			}
		else if (str[j] == '.' || str[j] == '!' || str[j] == '?' || str[j] == '"')
			{
			if (str[j + 1] >= 'a' && str[j + 1] <= 'z')
			{
				str[j + 1] -= 'a' - 'A';
			}
			}
		else if (str[j] == '(' || str[j] == ')' || str[j] == '{' || str[j] == '}')
			{
			if (str[j + 1] >= 'a' && str[j + 1] <= 'z')
			{
				str[j + 1] -= 'a' - 'A';
			}
			}
		else
		{}
		j++;
	}
	return (str);
}
