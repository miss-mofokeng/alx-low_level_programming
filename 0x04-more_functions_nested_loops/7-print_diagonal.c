#include "main.h"

/**
 * print_diagonal - a function that draws a line
 * @n: diagonal line
 *
 * Return 0.
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int d;
		int l;

		for (d = 0 ; d < n ; d++)
		{
			for (l = 0 ; l < n ; l++)
			{
				if (l == d)
					_putchar('\\');
				else if (l < d)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
