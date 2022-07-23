#include "main.h"
#include <stdio.h>
/**
 * print_buffer - brint buffer string content.
 * @b: string buffer.
 * @size: buffer size.
 * Return: nothing.
 */
void print_buffer(char *b, int size)
{
	int i, j, k;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (k = 0; k < 10; k += 2)
		{
			if ((i + k) < size)
				printf("%02x%02x ", b[i + k], b[i + k + 1]);
			else
				printf("     ");
		}
		for (j = 0; j < 10; j++)
		{
			if ((b[i + j] >= 0 && b[i + j] <= 31) || b[i + j] >= 127)
			{
				if ((i + j) < size)
					printf(".");
				else
					printf(" ");
			}
			else
			{
				if ((i + j) < size)
					printf("%c", b[j + i]);
				else
					break;
			}

		}
		printf("\n");
	}
}

