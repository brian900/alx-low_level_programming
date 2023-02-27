#include "main.h"
/**
 * _puts - prints a string,followed by a new line,to stdout
 * @str: string pointer to be printed
 * Return: Empty
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a])
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
