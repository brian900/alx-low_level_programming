#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers,
 * @n: elements of an array of integers
 * @a: An Array of integers
 * Return: empty
 */
void print_array(int *a, int n)
{
	int s;

	for (s = 0; s < n; s++)
	{
		printf("%d", a[s]);
		if (s != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
