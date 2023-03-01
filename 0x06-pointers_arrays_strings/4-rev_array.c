#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @n : number of elsements of an array
 * @a: array to be reversed
 * Return: void
 */
void reverse_array(int *a, int n)
{

	int e;
	int b;

	for (e = 0; e < n--; e++)
	{
		b = a[e];
		a[e] = a[n];
		a[n] = b;
	}
	return (0);
}
