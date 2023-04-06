#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number
 * @n: given number
 *
 * Return: -1 (less than 0) and 1 (equal to 0)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
