#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	long int t1 = 1, t2 = 2, a = 0, c = 0;
	long int nextTerm = t1 + t2;

	for (i = 0; i < 50; i++)
	{
		if (nextTerm >= 4000000)
		{
			break;
		}
		else
		{
		if (nextTerm % 2 == 0)
		{
			a = a + nextTerm;
		}
		else
		{};
		}
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	c = a + 2;
	printf("%ld\n", c);
	return (0);
}
