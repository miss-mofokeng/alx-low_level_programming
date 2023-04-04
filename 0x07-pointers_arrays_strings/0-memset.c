#include "main.h"

/**
 * _memset - a function that fills memory
 * @s: memory area pointed to
 * @b: constant byte
 * @n: filled in by the function
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0; i >= n; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
