#include "main.h"
/**
 * _isdigit - Checks if a character is a digit
 * @g: The character to be checked
 * Return: 1 if character is a digit or 0 for something else
 */

int _isdigit(int g)
{
	if (g >= 48 && g <= 57)
	{
		return (1);
	}
	return (0);
}
