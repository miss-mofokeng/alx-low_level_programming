#include "main.h"

/**
 * _strlen - a function that prints a string
 * @s: a length of a string
 *
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
