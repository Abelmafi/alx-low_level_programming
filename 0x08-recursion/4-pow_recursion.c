#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - print string
 * @x: number
 * @y: power
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	if (y > 1)
		y--;
	return (x * _pow_recursion(x, y));

}
