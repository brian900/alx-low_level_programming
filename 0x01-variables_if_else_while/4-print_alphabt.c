#include <stdio.h>
/**
 * main - the programme uses putchar to print all letters except q&e
 * Return: 0 (success)
 */

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
		n++;
		continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
