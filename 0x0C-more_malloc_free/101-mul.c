#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * rowmultiply - multiplay  two numbers and put the result into 2d array.
 * @row: array row
 * @column: array column
 * @arg1: frist number
 * @arg2: second number
 *
 * Return: pointer
 */

int *rowmultiply(int **arr, int row, int column, char *arg1, char *arg2)
{
	int i, j, g = 0, r, c;

	for (i = row - 1, g = 0, r = 0, c = column; i >= 0; i--)
	{
		for (j = column - 1; j >= 0; j--)
		{
			int f = ((arg1[i] - '0') * (arg2[j] - '0')) + g;
			int l = f % 10;

			if (f > 9)
			{
				arr[r][c] = l;
				g = f / 10;
			}
			else
			{
				arr[r][c] = f;
				g = 0;
			}
			c--;
		}
		if (g != 0)
		{
			arr[r][c] = g;
			g = 0;
		}
		c = column;
		r++;
	}
	return (*arr);
}

/**
 * rowsum - main function
 * @arr2: 2d array
 * @rw: array row
 * @col: array column
 * @result: result hundeler pointer
 * Return: pointer
 */

int *rowsum(int **arr2, int rw, int col, int *result)
{
	int i, j, k,  sum, z, p = 0;

	for (z = (rw + col - 1), k = 0, i = 0, j = col, sum = 0; z >= 0; z--)
	{
		if (j <= 0 && p == 1)
		{
			i++;
			j = 0;
		}
		int v = i, t = j;

		while (v < rw && t <= col)
		{
			sum = sum + arr2[v][t];
			v++;
			t++;
		}
		sum = sum + k;
		if (j >= 0 && p == 0)
		{
			if (j == 0)
				p = 1;
			i = 0;
			j--;
		}
		int g = sum % 10;

		if (sum > 9)
		{
			result[z] = g;
			k = sum / 10;
		}
		else
		{
			result[z] = sum;
			k = 0;
		}
		sum = 0;
	}
	return (result);
}

/**
 * main - main function
 * @argc: number of argument
 * @argv: argument variable
 * Return: zero
 */

int main(int argc, char *argv[])
{
	char *m, *n;
	int **ss;
	int *mul;
	int i, j;
	int len1 = strlen(argv[1]);
	int len2 = strlen(argv[2]);

	m = argv[1];
	n = argv[2];
	(void) argc;

	if (argv[1] == NULL || argv[2] == NULL)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		ss = (int **)malloc(len1 * sizeof(int *));
		for (i = 0; i < len1; i++)
			ss[i] = (int *)malloc((len2 + 1) * sizeof(int));
		rowmultiply(ss, len1, len2, m, n);
		mul = (int *)malloc(sizeof(int) * (len1 + len2 + 1));
		rowsum(ss, len1, len2, mul);
		for (i = 0; i < len1 + len2; i++)
			printf("%d", mul[i]);
		printf("\n");
	}
	return (0);
}
