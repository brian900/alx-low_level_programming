#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: finalpointer destination the  value is copied to
 * @n: bytes copied
 * @src: initial pointer for n
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
