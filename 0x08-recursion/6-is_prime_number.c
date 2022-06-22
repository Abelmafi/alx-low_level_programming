#include <stdio.h>
#include "main.h"
/**
 * check - main func
 * @i: int var
 * @num: int var
 * Return: int;
 */
int check(int i, int num)
{

	if (num % i == 0 || num < 2)
		return (0);
	if (i == num - 1)
		return (1);
	if (num > i)
		return (check(i + 1, num));
	return (1);
}


/**
 * is_prime_number - main func
 * @n: int var
 * Return: int
 */

int is_prime_number(int n)
{
	return (check(2, n));
}
