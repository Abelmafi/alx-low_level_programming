#include <stdio.h>
#include "main.h"
/**
 * check - main func
 * @i: int var
 * @j: int var
 * @b: char string
 * Return: int;
 */
int check(int i, int j, char *b)
{

	if (*(b + j) != *(b + i - 1))
		return (0);
	if (i != 0)
	{
		j++;
		i--;
		return (check(i, j, b));
	}
	return (1);
}
/**
 * strlen_rec - calculate string length
 * @s: char string
 *
 * Return: intiger
 */
int strlen_rec(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (1 + strlen_rec(s));
	}
	return (0);
}
/**
 * is_palindrome - check if string is palindrom
 * @s: char string
 * Return: int
 */

int is_palindrome(char *s)
{
	int i, j = 0;

	i = strlen_rec(s);
	return (check(i, j, s));
}
