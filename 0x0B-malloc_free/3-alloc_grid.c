#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a newly allocated space in memory.
 * @width: raw length.
 * @height: colomun length.
 *
 * Return: pointer of an array of chars
 */
int **alloc_grid(int width, int height)
{
	int **s;
	int i, j;

	s = (int **)malloc(sizeof(int *) * height);
	if (s == NULL)
	{
		return (NULL);
		free(s);
	}
	for (i = 0; i < height; i++)
		s[i] = (int *)malloc(width * sizeof(int));
	if (width <= 0 || height <= 0)
	{
		return (NULL);
		for (i = 0; i < height; i++)
			free(s[i]);
		free(s);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			s[i][j] = 0;
		}
	}
	return (s);
	for (i = 0; i < height; i++)
		free(s[i]);
	free(s);
}
