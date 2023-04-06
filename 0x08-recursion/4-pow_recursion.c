#include "main.h"

/**
 * _pow_recursion - a function that returns a value raised to the power
 * @x: base
 * @y: power
 *
 * Return: x raised to the power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
