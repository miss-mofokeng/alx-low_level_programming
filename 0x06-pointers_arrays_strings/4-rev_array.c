#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements in the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int r;

	for (i = 0; i < n--; i++)
	{
		r = a[i];
		a[i] = a[n];
		a[n] = r;
	}
}
