#include "main.h"

/**
 * _strpbrk - a function that searches a string
 * @s: string
 * @accept: takes any bytes in a the string
 *
 * Return: haystack
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
			return (s);
	}
	s++;
	{
		return ('\0');
	}
}
