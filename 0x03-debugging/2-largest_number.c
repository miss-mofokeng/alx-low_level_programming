#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: firsst integer
 * @b: second integer
 * @c: third integer
 * Return: largst number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
	{
		largest = a;
	}
	else if (c > a)
	{
		largest = c;
	}
	else if (a > c && c > b)
	{
		largest = a;
	}
	else if (b > a)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
