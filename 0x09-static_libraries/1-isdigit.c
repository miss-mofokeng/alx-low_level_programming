#include "main.h"

/**
 * _isdigit - a function that checks for a digit
 * @c: digits 0 through to 9
 *
 * Return: 1 (successful) 0 (unsuccessful)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
