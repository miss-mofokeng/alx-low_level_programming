#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0 (success)
 */
int main(void)
{
	char l;
	char u;

	for (l = 'a' ; l <= 'z' ; l++)
		putchar(l);
	for (u = 'A' ; u <= 'Z' ; u++)
		putchar(u);
	putchar('\n');
	return (0);
}
