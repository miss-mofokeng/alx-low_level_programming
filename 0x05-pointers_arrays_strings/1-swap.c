#include "main.h"

/**
 * swap_int - swapping the value of two integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: 0.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

