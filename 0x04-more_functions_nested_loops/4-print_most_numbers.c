#include "main.h"
/**
 * print_most_numbers - The function prints the numbers from 0 to 9
 * Description: Prints all numbers excluding 2 & 4
 * Return: numbers from 0 to 9
 */

void print_most_numbers(void)
{
	int a = 0;

	for (; a <= 9; a++)
	{
		if (a == 2 || a == 4)
		{
			continue;
		}
		else
		{
			_putchar(a + '0');
		}
	}
	_putchar('\n');
}
