#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 *     *
 */
int main(void)
{
	int n, d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;
	if (d > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, d);
	}
	else if (d > 0 && d < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, d);
	}
	else
	{
		printf("Last digit of %d is %d and is 0", n, d);
	}
	/* your code goes there */
	return (0);
}
