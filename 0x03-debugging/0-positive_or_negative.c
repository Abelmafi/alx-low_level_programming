#include "main.h"

/**
 *  * positive_or_negative - Entry point
 *   *
 * @n: intiger
 *    * Return: 0 for success
 */
void positive_or_negative(int n)
{
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is positive\n", n);
}
