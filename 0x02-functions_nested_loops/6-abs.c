#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @g: The number to be computed.
 * Return: Absolute value of a numbe ror zero
 */

int _abs(int g)
{
	if (g < 0)
	{
		int abs_val;

		abs_val = g * -1;
		return (abs_val);
	}
	return (g);
}
