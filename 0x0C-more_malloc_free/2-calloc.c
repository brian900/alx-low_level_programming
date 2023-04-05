#include "main.h"


/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: Number of elements in the array
 * @size: Size of each element in bytes
 *
 * Return: Pointer to the allocated memory
 *         NULL if nmemb or size is 0, or if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem1;
	unsigned int i;


	if (nmemb == 0 || size == 0)
		return (NULL);

	mem1 = malloc(nmemb * size);

	if (mem1 == NULL)
		return (NULL);


	for (i = 0; i < nmemb * size; i++)
		mem1[i] = 0;


	return (mem1);
}

