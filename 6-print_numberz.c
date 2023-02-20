#include <stdio.h>
/**
 * main - the program prints single digit numbers of base 10
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');

	return (0);
}
