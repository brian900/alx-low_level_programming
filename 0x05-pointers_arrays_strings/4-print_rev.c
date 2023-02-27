#include "main.h"
/**
 * print_rev - function prints a string,in reverse,followed by a new line.
 * @s: String to be printed.
 * Return: Void
 */
void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
		a++;
	for (a = a - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
