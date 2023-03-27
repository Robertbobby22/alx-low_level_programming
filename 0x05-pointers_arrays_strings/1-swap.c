#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 *@b: int to swap
 *@a: int to swap
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
