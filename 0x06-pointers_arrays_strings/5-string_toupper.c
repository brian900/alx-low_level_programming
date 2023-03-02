#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: pointer of the string
 * Return: empty
 */
char *string_toupper(char *s)
{
	int length = strlen(s);
	int i;

	for (i = 0; i < length; i++)
	{
		s[i] = toupper(s[i]);
	}
	return (0);

}
