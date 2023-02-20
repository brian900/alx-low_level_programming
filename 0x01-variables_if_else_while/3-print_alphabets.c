#include <stdio.h>
/**
 * main -The programme prints alphabet in Lowercase and Uppercase.
 * Return: 0 (success)
 */
int main(void)
{
	int n = 97;
	int g = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (g <= 90)
	{
		putchar(g);
		g++;
	}
	putchar('\n');

	return (0);
}
