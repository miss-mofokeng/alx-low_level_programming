#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer
 * @str: string to be duplicated
 *
 * Return: NULL
 */
char *_strdup(char *str)
{
	char *str2;
	int i;
	int r;

	if (str == NULL)
		return ("NULL");

	i = 0;

	while (str[i] != '\0')
		i++;

	r = 0;
	str2 = malloc(sizeof(char) * (i + 1));
			if (str2 == NULL)
			return ("NULL");
			for (r = 0; str[r]; r++)
			str2[r] = str[r];
			return (str2);
}
