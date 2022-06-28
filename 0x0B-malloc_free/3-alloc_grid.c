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

	s = (int **)malloc(sizeof(int *) * width);
	if (s == NULL)
	{
		return (NULL);
		free(s);
	}
	for (i = 0; i < width; i++)
		s[i] = (int *)malloc(height * sizeof(int));
	if (width <= 0 || height <= 0)
	{
		return (NULL);
		for (i = 0; i < width; i++)
			free(s[i]);
		free(s);
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			s[i][j] = 0;
		}
	}
	return (s);
	for (i = 0; i < width; i++)
		free(s[i]);
	free(s);
}
