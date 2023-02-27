#include "main.h"
/**
 * _puts - prints a string,followed by a new line,to stdout
 * @str: string pointer to be printed
 * Return: Empty
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
