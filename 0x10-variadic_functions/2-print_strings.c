#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - print string.
 * @separator: charactor that separate strings
 * @n: the number of strings to be displayed.
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;
	char *str;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (str != NULL)
			printf("%s", str);
		else
		{
			printf("%p", str);
		}
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
