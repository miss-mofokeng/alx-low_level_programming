#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: null on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *cat;
	int a;
	int b;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	a = b = 0;

	while (s1[a] != '\0')
		a++;

	while (s2[b] != '\0')
		b++;

	cat = malloc(sizeof(char) * (a + b + 1));

	if (cat == NULL)
		return (NULL);

	a = b = 0;

	while (s1[a] != '\0')
	{
		cat[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		cat[a] = s2[b];
		a++;
		b++;
	}
	cat[a] = '\0';
		return (cat);
}
