#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - print all taypes of data.
 * @format: contain data format of individual argument.
 *
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j = 0, counter = 0, k;
	float f;
	char d, *str;
	const char * const c = format;

	va_start(ap, format);
	while (c[i] != '\0')
	{
	if (c[i] == 'c' || c[i] == 'i' || c[i] == 'f' || c[i] == 's')
		counter++;
	i++;
	}
	while (j <= counter)
	{
		switch (format[j])
		{
			case 'c':
				d = va_arg(ap, int);
				printf("%c", d);
				break;
			case 'i':
				k = va_arg(ap, int);
				printf("%d", k);
				break;
			case 'f':
				f = va_arg(ap, double);
				printf("%f", f);
				break;
			case 's':
				str = va_arg(ap, char*);
				printf("%s", str);
				break;
			case '\0':
				str = va_arg(ap, char*);
				printf("%p", str);
				break;
		}	j++;
	}	printf("\n");
	va_end(ap);
}
