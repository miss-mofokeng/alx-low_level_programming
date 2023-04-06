#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - a function that returns the natural square root
 * @n: of a number
 *
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n != '\0')
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion(n));
	}
}
