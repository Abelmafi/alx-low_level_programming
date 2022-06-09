#include "main.h"
#include <ctype.h>
/**
 * _isupper - check the code.
 * @c: char
 * Return: Always 0 or 1
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
