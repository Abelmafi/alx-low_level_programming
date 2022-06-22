#include <stdio.h>
#include "main.h"
/**
 * check - checkes divisibility
 * @i: int var
 * @num: int var
 * Return: int;
 */

int check(int i, int num)
{
	if ((i * i) == num)
		return (i);
	if ((i * i) > num)
		return (-1);
	return (check(i + 1, num));
}


/**
 * _sqrt_recursion - main function
 * @n: int var
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (check(1, n));
}
