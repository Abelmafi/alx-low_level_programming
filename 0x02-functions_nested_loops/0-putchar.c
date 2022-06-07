#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "main.h"
/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 *     *
 */
int main(void)
{
	char a[] = "_putchar";
	int i = strlen(a);
	int j;

	for (j = 0; j < i; j++)
	{
		int b = a[j];

		_putchar(b);
	}
	_putchar('\n');
	return (0);
}
