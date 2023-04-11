#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints its name
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: program name
 */
int main(int argc, char *argv[])
{
	int name;

	printf("%s\n", argv[0]);
	for (name = 1; name < argc; name++)
	{
		printf("%d: %s\n", name, argv[name]);
	}
	return (0);
}
