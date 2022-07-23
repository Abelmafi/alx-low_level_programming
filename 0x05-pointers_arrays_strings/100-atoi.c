#include "main.h"
#include <stdio.h>
#include <limits.h>
/**
 * _atoi - convert char to intiger.
 * @s: string.
 *
 * Return: intiger.
 */
int _atoi(char *s)
{
	int i = 0, j = 0, k = 1, f = 1;
	long int sum = 0;

	while (s[i])
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (sum != 0)
				sum = 0;
			while (s[i - j] >= '0' && s[i - j] <= '9' && s[i - j] != '\0')
			{
				sum += (s[i - j] - '0') * k;
				k *= 10;
				j++;
				f = 1;
			}
			i = i - j;
		}
		if (s[i] == '-')
			f *= -1;
		k = 1;
		j = 0;
		i--;
	}
	sum = sum * f;
	return (sum);
}
