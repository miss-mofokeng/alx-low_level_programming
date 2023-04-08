#include "main.h"
/**
 * _islower - program that prints lower case alphabets
 *
 * @c: function that checks for lowercase character
 *
 * Return: 1 (success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
