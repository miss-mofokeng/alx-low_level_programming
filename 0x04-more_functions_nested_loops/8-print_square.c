#include "main.h"

/**
 * print_square - a function that prints a shape
 * @size: a square
 *
 * Return: 0.
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int s;
		int p;

		for (s = 0 ; s < size ; s++)
		{
			for (p = 0 ; p < size ; p++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
