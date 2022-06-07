#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _isalpha - check the if the nember is alphanumeric.
 *
 *  @c: intiger
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}

