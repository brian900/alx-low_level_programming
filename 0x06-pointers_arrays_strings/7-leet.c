#include "main.h"
/**
 * leet - function that encodes a string into 1337.
 * @n: string to be encoded.
 * Return: final encoded value
 */
char *leet(char *n)
{
	int i, j;
	char b1[] = "aAeEootTlL";
	char b2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == b1[j])
			{
				n[i] = b2[j];
			}
		}
	}
	return (0);
}
