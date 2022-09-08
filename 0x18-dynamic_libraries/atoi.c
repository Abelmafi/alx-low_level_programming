#include "main.h"
/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */
int _atoi(char *s)
{
	int res = 0, i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		res = res * 10 + s[i] - '0';
	}
	return (res);
}

