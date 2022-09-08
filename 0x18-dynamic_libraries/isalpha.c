#include "main.h"
/**
 * _isalpha - check number if its alpha bet.
 * @c: ascii value input.
 *
 * Return: length of string.
 */

int _isalpha(int c)
{
	return (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')));
}

