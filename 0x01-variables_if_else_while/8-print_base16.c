#include <stdio.h>
/**
 * main - program that prints all the numbers of base 16 in lowercase
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	int g;

	for (n = 48; n <= 57; n++)

	{
		putchar(n);
	}
	for (g = 97; g <= 102; g++)
	{
		putchar(g);
	}
	putchar('\n');
	return (0);
}

