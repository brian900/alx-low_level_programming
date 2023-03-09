#include "main.h"

int check_prime(int, int);
/**
* is_prime_number - function returns 1 if the number is prime
* @n: number checked if prime or not
* Return: prime number if true
*
*/
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
* check_prime - checks if a number is a prime number
* @n:  first number to be checked
* @i: second number to be checked
* Return: prime number
*/
int check_prime(int n, int i)
{
	if (n <= 1)
{
	return (0);
}
if (n % i == 0 && i > 1)
{
	return (0);
}
if ((n / i) < i)
{
	return (1);
}
else
{
return (check_prime(n, i + 1));
}
}
