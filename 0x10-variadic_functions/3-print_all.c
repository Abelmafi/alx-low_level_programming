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
	unsigned int j = 0, bgn = 0;
	char *str;

	va_start(ap, format);
	while (format && format[j] != '\0')
	{
		switch (format[j])
		{ case 'c':
			switch (bgn)
			{ case 1: printf(", ");	}
			bgn = 1;
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			switch (bgn)
			{ case 1: printf(", "); }
			bgn = 1;
			printf("%i", va_arg(ap, int));
			break;
		case 'f':
			switch (bgn)
			{ case 1: printf(", "); }
			bgn = 1;
			printf("%f", va_arg(ap, double));
			break;
		case's':
			switch (bgn)
			{ case 1: printf(", "); }
			bgn = 1;
			str = va_arg(ap, char*);
			if (str)
			{ printf("%s", str);
			break; }
			printf("%p", str);
			break; }
		j++;
	}
	printf("\n");
	va_end(ap);
}
