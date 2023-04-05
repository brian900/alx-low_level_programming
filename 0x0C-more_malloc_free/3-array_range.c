#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value (inclusive)
 * @max: maximum value (inclusive)
 *
 * Return: a pointer to the newly created array or NULL if failed
 */
int *array_range(int min, int max)
{
	int i, size;
	int *arr;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}

