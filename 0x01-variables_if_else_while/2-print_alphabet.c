#include <stdio.h>
/**
 * main - A programme that uses putchar function
 * Return:0 (success)
 */

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
