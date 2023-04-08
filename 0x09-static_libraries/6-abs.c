#include "main.h"
/**
 * _abs - a function that computes an integer
 * @i: absolute values of an integer
 *
 * Return: i (success)
 */

int _abs(int i)
{
	if (i < 0)
		i = -(i);
	else if (i >= 0)
		i = i;
	return (i);
}
