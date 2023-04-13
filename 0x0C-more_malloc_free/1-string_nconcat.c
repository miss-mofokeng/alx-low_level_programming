#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: unsigned int
 *
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int cat1, cat2;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	str = malloc(strlen(s1) + n + 1);
	if (str == NULL)
		return (NULL);

	for (cat1 = 0; s1[cat1] != '\0'; cat1++)
		str[cat1] = s1[cat1];
	for (cat2 = 0; s2[cat2] != '\0'; cat2++)
		str[cat2] = s1[cat2];
	str[cat1 + cat2] = '\0';

	return (str);
}
