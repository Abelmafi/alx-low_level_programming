#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _islower - check if the letter is lowercase or not.
 *
 * @c: intiger value
 *
 * Return: return 0 and 1.
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
