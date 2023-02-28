#include "main.h"
/**
 * puts_half  - prints half of a string, followed by a new line
 * @str: the string whose half is to be printed
 * Return: Empty
 */
void puts_half(char *str)
{
	int s;
	int t = 0;

	while (str[t] != '\0')
	{
		t++;
	}
	if (t % 2 == 1)
	{
		s = (t - 1) / 2;
		s += 1;
	}
	else
	{
		s = t / 2;
	}
	for (; s < t; s++)
	{
		_putchar(str[s]);
	}
	_putchar('\n');
}
