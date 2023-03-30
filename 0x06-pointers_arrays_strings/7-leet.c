#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @n: number
 * Return: n
 */
char *leet(char *n)
{
	int e;
	int s;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (e = 0; n[e] != '\0'; e++)
	{
		for (s = 0; s < 10; s++)
		{
			if (n[e] == s1[s])
			{
				n[e] = s2[s];
			}
		}
	}
	return (n);
}
