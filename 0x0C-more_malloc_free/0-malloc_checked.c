#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - reserve memory for intiger.
 * @b: intiger.
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	int *s;

	s = (int *)malloc(sizeof(int) * b);
	if (s == NULL)
		exit(98);
	return (s);
}
