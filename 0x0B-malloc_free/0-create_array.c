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
	char *arr;
	unsigned int i;

	arr = malloc(size * sizeof(char));
	if (size == 0 || arr == NULL)
	{
		return ("NULL");

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	}
	return (arr);
}
