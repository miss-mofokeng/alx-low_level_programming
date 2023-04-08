#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: string
 * @needle: first occurrence
 *
 * Return: haystack
 */
char *_strstr(char *haystack, char *needle)
{
	char *i = haystack;
	char *p = needle;
	
	if (*i == *p && *p != '\0')
	{
		i++;
		p++;
	}
	else if (*p == '\0')
		return (haystack);
}
