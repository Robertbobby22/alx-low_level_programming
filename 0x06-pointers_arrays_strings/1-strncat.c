#include "main.h"

/**
 * _strncat - Concentrates two strings using atmost
 * inputed number of bytes from src
 * @src: String to be appended
 * @dest: String to be appended upon
 * @n: Number of bytes from src to be appended to dest
 *
 * Return: Number of bytes from src apended to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int digit = 0, dest_len = 0;

	while (dest[digit++])
		dest_len++;

	for (digit = 0; src[digit] && digit < n; digit++)
		dest[dest_len++] = src[digit];

	return (dest);
}
