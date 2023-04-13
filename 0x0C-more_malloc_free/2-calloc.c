#include "main.h"
#include <stdlib.h>
/**
 * _calloc - a function that allocates memory for an array
 * @nmemb: an array
 * @size: bytes
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *i;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	i = malloc(nmemb * size);
	if (i == NULL)
		return (NULL);

	for (x = 0; x < nmemb * size; x++)
		i[x] = 0;

	return (i);
}
