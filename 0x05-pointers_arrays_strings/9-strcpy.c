#include "main.h"

/**
 * _strcpy - a function that copies a string
 * @src: including the terminating null byte
 * @dest: pointed to buffer
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int p = 0;
	int c = 0;

	while (*(src + p) != '\0')
	{
		p++;
	}
	for (; c < p; c++)
	{
		dest[c] = src[c];
	}
	dest[p] = '\0';
	return (dest);
}
