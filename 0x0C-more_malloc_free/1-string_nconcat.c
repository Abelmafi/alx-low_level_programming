#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - reserve memory for intiger.
 * @s1: frist string.
 * @s2: second string.
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int a = 0, b = 0, j = 0, i = 0, c;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[a] != '\0')
	{
		a++;
	}
	while (s2[b] != '\0')
	{
		b++;
	}
	if (n >= b)
	{
		 n = b;
	}
	c = a + n;
	s = (char *)malloc(sizeof(char) * (c + 1));
	if(s == NULL)
	{
		return ('\0');
	}
	while (i < a)
	{
		s[i] = s1[i];
		i++;
	}
	while (i < c)
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	s[i] = '\0';
	return (s);
}
