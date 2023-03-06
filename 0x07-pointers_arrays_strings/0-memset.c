#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @n: byte space to be filled
 * @s: pointer of the area to be filled
 * @b: the character to fill the memomory with
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}

