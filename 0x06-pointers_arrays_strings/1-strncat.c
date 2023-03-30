#include "main.h"
/**
 * _strncat - a function that concatenates
 * @dest: string 1
 * @src: string 2
 * @n: number of appendix
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int d;
	int s;

	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	s = 0;
	while (s < n && src[s] != '\0')
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}
