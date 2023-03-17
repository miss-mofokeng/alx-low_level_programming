#include <stdio.h>

/**
 * main - print base 16
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	char c;

	for (i = '0' ; i <= '9' ; i++)
		putchar(i);
	for (c = 'A' ; c <= 'F' ; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
