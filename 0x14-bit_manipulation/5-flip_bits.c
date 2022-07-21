#include "main.h"
/**
 * flip_bits - flip bits when they doesnt mach.
 * @n: first number.
 * @m: referance number.
 *
 * Return: the number of flipes neded to mach the numbers.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int j = 0;
	int i;

	for (i = 31; i >= 0; i--)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
			j++;
	}
	return (j);
}
