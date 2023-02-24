#include "main.h"
/**
 * _isupper - Checks if a letter is upper
 * @g: The number to be checked
 * Return: 1 for upper letter or 0 for anything else
 */

int _isupper(int g)
{
	if (g >= 65 && g <= 90)
	{
		return (1);
	}
	return (0);
}
