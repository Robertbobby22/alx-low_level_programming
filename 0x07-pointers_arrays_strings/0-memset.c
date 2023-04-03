#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: The beginning of the address to be filled
 * @b: Desired value
 * @n: number of bytes
 *
 * Return: results
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
