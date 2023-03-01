#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: 1st string to be compared
 * @s2: 2nd string to be compared
 * Return: empty
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++
	}
	return (0);
}
