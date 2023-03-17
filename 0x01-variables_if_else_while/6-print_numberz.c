#include <stdio.h>

/**
 * main - a program that prints base 10 numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
