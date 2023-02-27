#include "main.h"
#include <string.h>
/**
 * _strlen - function returns the length of a string
 * @s: string pointer the function analyses
 * Return: the string length
 */

int _strlen(char *s)
{
	int l = 0;

	while (s[l])
	l++;
	return (l);
}
