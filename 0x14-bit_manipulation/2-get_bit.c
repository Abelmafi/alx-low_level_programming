#include "main.h"
/**
 * get_bit - print binary of numberat given index.
 * @index: index.
 * @n: un intiger.
 *
 * Return: int.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int j;
	int i, a;

	if (n == '\0' || index == '\0' || index > (sizeof(n) * 8 - 1))
		a = -1;
	for (i = j = sizeof(n) * 8 - 1; i >= 0; i--, j--)
	{
		if (j == index)
		{
			((n >> i) & 1) ? (a = 1) : (a = 0);
		}
	}
	return (a);
}

