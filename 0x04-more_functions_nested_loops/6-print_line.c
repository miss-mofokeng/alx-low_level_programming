#include "main.h"

/**
 * print_line - a function that prints a line
 * @n: striaght line
 *
 * Return: 0.
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int l;

		for (l = 1; l <= n ; l++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
