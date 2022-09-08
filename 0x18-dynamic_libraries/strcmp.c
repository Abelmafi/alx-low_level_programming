#include "main.h"
/**
 * _strcmp - compaire two strings.
 * @s1: string input.
 * @s2: second string input.
 *
 * Return: 1 if they are same and 0 if they are not.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0' || *s2 == '\0')
			break;
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	return (1);
}

