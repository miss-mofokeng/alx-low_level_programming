#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: number of bytes
 * @accept: consists of s bytes
 *
 * Return: n
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			n++;
			break;
		}
		if (accept[r + 1] == '\0')
			return (n);
	}
	s++;
	return (n);
}
