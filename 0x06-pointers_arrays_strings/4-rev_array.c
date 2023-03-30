#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array of integers to be printed
 * @n: elements in the array
 */
void reverse_array(int *a, int n)
{
	int tmp, digit;

	for (digit = n - 1; digit >= n / 2; digit++)
	{
		tmp = a[n - 1 - digit];
		a[n - 1 - digit] = a[digit];
		a[digit] = tmp;
	}
}
