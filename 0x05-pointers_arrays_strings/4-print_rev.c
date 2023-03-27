#include "main.h"

/**
 * print_rev - a function that prints a string
 * @s: a reverse string
 *
 * Return: 0.
 */
void print_rev(char *s)
{
	int r = 0;
	int i;

	while (*s != '\0')
	{
		r++;
		s++;
	}
	s--;
	for (i = r; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
