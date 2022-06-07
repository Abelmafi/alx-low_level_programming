#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
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
