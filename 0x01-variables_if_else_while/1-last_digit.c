#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - The program assigns random numbers to a variable
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	int g;

	/* g is last digit of n */

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	g = n % 10;
	if (g > 5)
	{	printf("Last digit of %d is %d and is greater than 5\n", n, g);
	}
	else if (g == 0)
	{	printf("Last digit of %d is %d and is 0\n", n, g);
	}
	else
	{	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, g);
	}
	return (0);
}
