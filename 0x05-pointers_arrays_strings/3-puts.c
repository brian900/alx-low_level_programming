#include "main.h"
/**
 * _puts - prints a string,followed by a new line,to stdout
 * @str: string pointer to be printed
 * Return: Empty
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
