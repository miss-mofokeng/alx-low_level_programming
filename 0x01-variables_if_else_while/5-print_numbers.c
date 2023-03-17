#include <stdio.h>

/**
 * main - a program that prints all single digit numbers of base 10
 *
 * Return: 0 (success)
 */
int main(void)
{
	char d;

	for (d = '0' ; d <= '9' ; d++)
		putchar(d);
	putchar('\n');
	return (0);
}
