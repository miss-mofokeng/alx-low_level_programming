#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints the number of arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: number of arguments
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
