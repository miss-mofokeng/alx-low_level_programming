#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the addition of two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: add results, 1 or error
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 0)
	{
		printf("%s", "Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
