#include "main.h"
/**
 * _puts - prints a string,followed by a new line,to stdout
 * @str: string pointer to be printed
 * Return: Empty
 */
void _puts(char *str)
{
	int S = 0;

	while (str[S])
	{
		_putchar(str[S]);
		S++;
	}
	_putchar('\n');
}
