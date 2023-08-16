#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: columns
 * @height: rows
 * Return: NULL
 */
int **alloc_grid(int width, int height)
{
	int **str;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	str = malloc(sizeof(int *) * height);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		str[i] = malloc(sizeof(int) * width);

		if (str[i] == NULL)
		{
			free(str);
			for (j = 0; j <= height; j++)
				free(str[j]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			str[i][j] = 0;
	}
	return (str);
}
