#include <stdio.h>
#include "main.h
"
/**
 *print_alphabet - prints the alphabet
 *
 *Returns: nothing
 *
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}

