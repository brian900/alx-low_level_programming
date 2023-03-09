#include "main.h"
#include <stdio.h>
int _sqrt(int, int);
/**
* _sqrt_recursion - function that returns the natural square root of a number
* @n: number whose square root is calculated
* Return: natural sqrt
*/
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
* _sqrt_recursion - function that returns the natural square root of a number
* @n: number
* @i: number to be iterated
* Return: number
*/
int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
	return (-1);
	if (square == n)
	return (i);
	else
	return (_sqrt(n, i + 1));
}
