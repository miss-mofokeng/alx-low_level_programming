#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

	c = '0';
	printf("%c: %d\n", _isdigit(c));
	c = 'a';
	printf("%c: %d\n", _isdigit(c));
	return (0);
}
