#include "main.h"

/**
 * positve_or_negative - function that prints integers
 * @i: positive or negative
 * Return: 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
