#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - print numbers.
 * @separator: separator character to be printed between numbers.
 * @n: intiger type numbers
 *
 * Return: nothing;
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}


