#include "main.h"
#include <stdio.h>
/**
* _sqrt_recursion - function that returns the natural square root of a number
* @n: number whose square root is calculated
* Return: natural sqrt
*/

int _sqrt_recursion(int n)
{
	if ((n * n) < 0)
{
	return (-1);
}
if ((n * n) == 1)
{
	return (1);
}
else
return (n * _sqrt_recursion(n + 1));
}
