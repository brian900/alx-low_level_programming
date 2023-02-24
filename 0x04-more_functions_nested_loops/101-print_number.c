#include "main.h"
/**
 * main - prints an integer
 * @n: integer to print
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
