#include "main.h"

/**
 * print_triangle - a function that prints a shape
 * @size: a triangle
 * Return: 0.
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		int t;

		for (i = 0 ; i <= size ; i++)
		{
			for (t = 0 ; t <= size ; t++)
			{_putchar(' ');
			}
			for (i = 1; t <= i; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
