#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	long int t1 = 1, t2 = 2;
	long int nextTerm = t1 + t2;


	printf("%ld, %ld, ", t1, t2);
	for (i = 3; i <= 98; ++i)
	{
		if (i == 98)
		{
			printf("%ld", nextTerm);
		}
		else
		{
			printf("%ld, ", nextTerm);
			t1 = t2;
			t2 = nextTerm;
			nextTerm = t1 + t2;
		}
	}
	printf("\n");
	return (0);
}
