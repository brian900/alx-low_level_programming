#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 * @dest: destination value to be copied to
 * @src: source value to be copied
 * Return:  the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int s = 0;

	while (*(src + s) != '\0')
	{
		*(dest + s) = *(src + s);
		s++;
	}
	*(dest + s)  = '\0';
	return (dest);
}
