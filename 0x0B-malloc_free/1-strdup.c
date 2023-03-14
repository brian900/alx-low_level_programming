#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to new string which is a duplicate of string str
 * @str: string returned
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *AB;

	int i, x = 0;

	if (str == NULL)
	return (NULL);

	i = 0;
	while (str[i] != '\0')
	i++;

	AB = malloc(sizeof(char) * (i + 1));

	if (AB == NULL)
	return (NULL);


	for (x = 0; str[x]; x++)
		AB[x] = str[x];
	return (AB);
}

