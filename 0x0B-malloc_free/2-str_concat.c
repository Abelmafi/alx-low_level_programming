#include "main.h"
#include <stdlib.h>
/**
 * str_concat - returns a pointer to a newly allocated space in memory.
 * @s1: frist string.
 * @s2: second sting.
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i, j;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	s = (char *)malloc(sizeof(char) * (i + j + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
		s[i + j] = s2[j];

	return (s);
}
