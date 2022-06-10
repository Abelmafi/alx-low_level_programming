#include "main.h"
void main(void)
{
	long int c, i, j, a = 1231952;
	int b;
	for (i = 2; i < a; i ++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				b = 1;
				break;
			}
			else
			{
				b = 0;
			}
		}
		if (b == 1)
			continue;
		else 
			c = b;
	}
	printf("%ld", c);
}

