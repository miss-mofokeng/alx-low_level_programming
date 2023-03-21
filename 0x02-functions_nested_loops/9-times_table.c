#include "main.h"
/**
 * times_table - 9 times table
 *
 * Return: 0 (success)
 */
void times_table(void)
{
	int i;
	int m;
	m = 9;

	for (i = 0 ; i <= 9 ; i++)
		_putchar("%d * %d = %d \n", m, i, m * i);
	return (0);
}
