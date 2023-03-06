#include "main.h"
/**
 * _strchr - locates character in a string
 * @s: string to be actioned on
 * @c: character to be located
 * Return: Pointer or Null if the character is ot found
 */
char *_strchr(char *s, char c)
{
	int x = 0, e;

	while (s[x])
	{
		x++;
	}
	for (e = 0; e <= x; e++)
	{
		if (c == s[e])
		{
			s += e;
			return (s);
		}
	}
	return ('\0');
}
