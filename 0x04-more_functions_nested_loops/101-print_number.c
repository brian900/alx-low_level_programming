#include "main.h"
#include <stdio.hi>

/**
 * print_number - prints an integer number
 * @n: number to print
 * Return: Nothing
 */

void print_number(int n)
{
	unsigned int d = n;

	if (n < 0)
	{
		n *= -1;
		d = n;
		_putchar('-');
	}
	d /= 10;
	if (d != 0)
	{
		print_number(d);
		_putchar((unsigned int) n % 10 + '0');
	}
}
