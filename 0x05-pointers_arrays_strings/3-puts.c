#include "main.h"

/**
 * _puts - a function that prints
 * @str: a string
 *
 * Return: 0.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
