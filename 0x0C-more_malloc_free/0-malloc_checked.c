#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The size of the memory to allocate
 * Return: A pointer to the allocated memory
 * If malloc fails,
 * malloc_checked function causes process termination with status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *mem_ptr;

	mem_ptr = malloc(b);

	if (mem_ptr == NULL)
	{
		exit(98);
	}

	return (mem_ptr);
}
