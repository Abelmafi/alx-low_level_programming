#include "main.h"
/**
 * _isdigit - check the code
 * @c: intiger
 * Return: Always 0.
 */
int _isdigit(int c)
{
	int i, d;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
		{
			d = 1;
			break;
		}
		else
		{
			d = 0;
		}
	}
	if (d == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
