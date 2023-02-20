#include <stdio.h>
/**
 * main - program prints all possible combinations of single-digit numbers
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		if (n == 9)
		{
			continue;
		}
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
