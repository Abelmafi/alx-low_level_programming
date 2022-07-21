#include "main.h"
/**
 * print_binary - print binary of number.
 * @n: an intiger to be converted to binary.
 *
 * Return: void.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;
	int k;

        for (i = 1 << 31; i > 0; i *= 0.5)
        {
                if (n & i)
                {
                        k = 1;
                }
                if (k == 1)
                {
                        (n & i) ? _putchar('1') : _putchar('0');
                }
        }
        }
}

