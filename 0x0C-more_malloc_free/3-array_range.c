#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * @min: integer
 * @max: integer
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
		array[i] = min + i;

	return (array);
}
