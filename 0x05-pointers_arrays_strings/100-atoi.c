#include "main.h"
#include <stdio.h>
/**
 * _atoi - convert char to intiger.
 * @s: string.
 *
 * Return: intiger.
 */
int _atoi(char *s)
{
	int i = 0, j = 0, sum = 0, k = 1, flag = 0;

	while (s[i])
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i - j] >= '0' && s[i - j] <= '9' && s[i - j] != '\0')
			{
				sum += (s[i - j] - '0') * k;
				k *= 10;
				j++;
			}
			if (s[i - j] != '\0' && s[i - j] == '-')
				flag = 1;
		}
		i--;
	}
	if (flag == 1)
		sum = sum * -1;
	return (sum);
}
