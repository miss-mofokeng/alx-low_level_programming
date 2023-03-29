#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: string 1
 * @src: string 2
 *
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	int d = 0;
	int s = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		d++;
	for (i = 0; src[i] != '\0'; i++)
		s++;

	for (i = 0; i <= s; i++)
		dest[d + i] = src[i];
	return (dest);
}
