#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars
 * @size: memory space
 * @c: characters
 *
 * Return: a pointer to the array, or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = malloc(size * sizeof(char));

	while (size == 0)
	{
		return ("NULL");

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
		_putchar(arr[i]);
	}
	}
	return (arr);
}
