#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with malloc
 * @old_size: size of the allocated space for ptr
 * @new_size: new size of the memory block
 *
 * Return: pointer to the new memory block, or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *mpya, *source;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (!ptr)
	{
		mpya = malloc(new_size);
		if (!mpya)
			return (NULL);
		return (mpya);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	mpya = malloc(new_size);
	if (!mpya)
		return (NULL);

	source = ptr;
	for (i = 0; i < old_size && i < new_size; i++)
		mpya[i] = source[i];

	free(ptr);
	return (mpya);
}

