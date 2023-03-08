#include "main.h"
/**
 * factorial - returns factorial of a given number
 * @n: number whose factor is returned
 * Return: factor of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (0);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
