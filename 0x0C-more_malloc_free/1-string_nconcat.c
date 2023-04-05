#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @str1: the first string
 * @str2: the second string
 * @n: the number of bytes from str2 to concatenate with str1
 *
 * Return: a pointer to a newly allocated space in memory containing the
 * concatenated string, or NULL if the allocation fails
 */
char *string_nconcat(char *str1, char *str2, unsigned int n)
{
	char *new_str;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (str1 == NULL)
		str1 = "";

	if (str2 == NULL)
		str2 = "";

	while (str1[len1] != '\0')
		len1++;

	while (str2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	new_str = malloc((len1 + n + 1) * sizeof(char));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		new_str[i] = str1[i];

	for (j = 0; j < n; j++)
		new_str[i + j] = str2[j];

	new_str[i + j] = '\0';

	return (new_str);
}
