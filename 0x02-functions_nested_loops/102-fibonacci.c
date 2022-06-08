#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	long long int t1 = 1, t2 = 2;
	long long int nextTerm = t1 + t2;


	printf("%lld, %lld, ", t1, t2);
	for (i = 3; i <= 50; ++i)
	{
		printf("%lld, ", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	return (0);
}
