#include "main.h"
#include <stdio.h>

/**
 * main - a number that prints 'FizzBuzz' instead of multiples of 3 and 5
 *
 * Return: 0.
 */
int main(void)
{
	int m;

	for (m = 1 ; m <= 100; m++)
	{
		/* number divisible by 3 */
		if ((m % 3) == 0 && (m % 5) != 0)
		{
			printf("Fizz");
			printf(" ");
		}
		/* number divisible by 5 */
		else if ((m % 5) == 0 && (m % 3) != 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else if ((m % 3) == 0 && (m % 5) == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if (m == 1)
		{
			printf("%d", m);
			printf(" ");
		}
		else
		{
			printf("%d", m);
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
