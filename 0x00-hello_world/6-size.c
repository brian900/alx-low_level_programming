#include <stdio.h>
/**
 * main - The programme prints various computer sizes
 * Return: 0 (success)
 */
int main(void)
{
	char a;
	int f;
	long int b;
	long long int e;
	float f;
Printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
Printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(f));
Printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
Printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(e));
Printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
