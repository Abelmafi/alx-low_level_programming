#include "main.h"
/**
 * clear_bit - set index bit to zero
 * @n: pointer number
 * @index: index for change occurance.
 *
 * Return: 1 success, -1 error
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(*n)) - 1)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
