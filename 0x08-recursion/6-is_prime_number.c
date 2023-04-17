#include "main.h"

/**
 * is_prime_number - a function that checks for prime numbers
 * @n: integer
 *
 * Return: 1 (success), otherwise 0
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n == 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (n * is_prime_number(i - 1));
	}
}
