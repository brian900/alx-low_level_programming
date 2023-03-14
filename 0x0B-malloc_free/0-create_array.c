#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars,initializes it with a specific char
 * @size: array size
 * @c: Char initialized to an array
 * Return:  a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *strr;
	unsigned int a;

	strr = malloc(sizeof(char) * size);
	if (size == 0 || strr == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
		strr[a] = c;
	return (strr);
}
