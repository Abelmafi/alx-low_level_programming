#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * counter - count the number of words inside argiment.
 * @sv: string argument.
 *
 * Return: number of words
 */

int counter(char *sv)
{
	int j, c = 1, b = 0;

	for (j = 0; sv[j] != '\0'; j++)
	{
		if (sv[j] != ' ' && c == 1)
		{
			b++;
		}
		if (sv[j] != ' ' && c == 1)
		{
			c = 0;
		}
		if (sv[j] == ' ' && c == 0)
		{
			c = 1;
		}
	}
	return (b);
}
/**
 * strtow - concatenates all the arguments of a program.
 * @str: pointer argument.
 *
 * Return: pointer of an array of char
 */
char **strtow(char *str)
{
	char **s;
	int raw, i, j, a = 0, d = 1, b = 0;

	raw = counter(str);
	s = (char **)malloc(sizeof(char *) * raw);
	if (s == NULL || str == NULL)
	{	return (NULL);
		free(s);
	}
	for (i = 0; i < raw; i++)
	{
		for (j = 0 + a; str[j] != '\0'; j++)
		{
			if (str[j] != ' ')
			{	b++;
				a++;
				d = 0;
			}
			if (str[j] == ' ' && d == 1)
				a++;
			if (str[j] == ' ' && d == 0)
			{	a++;
				d = 1;
				break;
			}
		}
		s[i] = (char *)malloc(sizeof(char) * b + 1);
		b = 0;
	}
	d = 1;
	for (i = b = a = 0; i < raw; i++)
	{
		for (j = 0 + a; str[j] != '\0'; j++)
		{
			if (str[j] != ' ')
			{
				s[i][b] = str[j];
				a++;
				b++;
				d = 0;
			}
			if (str[j] == ' ' && d == 1)
				a++;
			if (str[j] == ' ' && d == 0)
			{	a++;
				d = 1;
				break;
			}
		}
	s[i][b] = '\0';
	b = 0;
	}
	return (s);
}
