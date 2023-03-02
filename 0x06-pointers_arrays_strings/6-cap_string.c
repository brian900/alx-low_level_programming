#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @s: string being capitalized
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int Capt = 0;

	while (s[Capt])
	{
		while (!(s[Capt] >= 'a' && s[Capt] <= 'z'))
			Capt++;

		if (s[Capt - 1] == ' ' ||
				s[Capt - 1] == '\t' ||
				s[Capt - 1] == '\n' ||
				s[Capt - 1] == ',' ||
				s[Capt - 1] == ';' ||
				s[Capt - 1] == '.' ||
				s[Capt - 1] == '!' ||
				s[Capt - 1] == '?' ||
				s[Capt - 1] == '"' ||
				s[Capt - 1] == '(' ||
				s[Capt - 1] == ')' ||
				s[Capt - 1] == '{' ||
				s[Capt - 1] == '}' ||
				Capt == 0)
			s[Capt] -= 32;

	}
	return (s);
}
