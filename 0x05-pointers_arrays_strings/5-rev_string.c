#include "main.h"
/**
 * rev_string - function reverses a string
 * @s: the string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int a = 0;
	char r = s[0];
	int b;

	while (s[a] !=  '\0')
		a++;
	for (b = 0; b < a;  b++)
	{
		a--;
		r = s[b];
		s[b] = s[a];
		s[a] = r;
	}
}
