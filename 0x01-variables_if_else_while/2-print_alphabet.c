#include <stdio.h>
/**
 * main - A programme that uses putchar function
 * Return:0 (success)
 */

int main(void)
{
	int n = 96;

	while (n <= 120)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
