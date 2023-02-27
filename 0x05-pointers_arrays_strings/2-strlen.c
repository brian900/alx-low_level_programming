#include "main.h"
#include <string.h>
/**
 * _strlen - function returns the length of a string
 * @s: string pointer the function analyses
 * Return: the string length
 */

int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len += 1;
	}
	return (len);
}
