#include "main.h"
/**
 * _strncat - concatenates two strings
 * @src: 1st string to be concatenated
 * @dest: final string after concatenation
 * @n: 2nd string to be concatenated
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
