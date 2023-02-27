#include "main.h"
/**
 * _strlen - function returns the length of a string
 * @s: string pointer the function analyses
 * Return: the string length
 */
int _strlen(char *s)
{
	int length;

	for (; *s != '\0'; s++)
	{
		length += 1;
	}
	return (length);
}
