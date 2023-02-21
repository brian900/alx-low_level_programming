#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @g: The number to be treated
 * Return: Value of the last digit of number
 */
int print_last_digit(int g)
{
	int last;

	last = g % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
