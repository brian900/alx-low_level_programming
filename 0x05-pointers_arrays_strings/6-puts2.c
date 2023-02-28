#include "main.h"
/**
 * puts2 - prints every character of a string,starting with the first character
 * @str: string to be printed
 * Return: empty
 */
void puts2(char *str)
{
	int s;
	int t = 0;

	while (str[t] != '\0')
	{
		t++;
	}
	for (s = 0; s < t; s += 2)
	{
		_putchar(str[s]);
	}
	_putchar('\n');
}
