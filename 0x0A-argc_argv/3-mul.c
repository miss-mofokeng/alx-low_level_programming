#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the multiplication of two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: mul results, 1 or error
 */
int main(int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;

		printf("%d\n", mul);

	return (0);
}
