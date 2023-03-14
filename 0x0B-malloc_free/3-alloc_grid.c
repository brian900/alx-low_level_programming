#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **str;
	int a, y;

	if (width <= 0 || height <= 0)
	return (NULL);

	str = malloc(sizeof(int *) * height);

	if (str == NULL)
	return (NULL);

	for (a = 0; a < height; a++)
	{
		str[a] = malloc(sizeof(int) * width);

		if (str[a] == NULL)
		{
			for (; a >= 0; a--)
				free(str[a]);
			free(str);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (y = 0; y < width; y++)
			str[a][y] = 0;
	}
	return (str);
	}
