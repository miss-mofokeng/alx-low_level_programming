#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: points to memory area
 * @b: bytes
 * @n: filled in first by the function
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
