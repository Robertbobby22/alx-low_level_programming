#include "main.h"

/**
 * _strncpy - copies the string
 *@n: maximum number of bytes to be copied from src
 *@dest: where string copy is stored
 *@src: source string
 *
 * Return: resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int digit = 0, src_len = 0;

	while (src[digit++])
		src_len++;

	for (digit = 0; src[digit] && digit < n; digit++)
		dest[digit] = src[digit];

	for (digit = src_len; digit < n; digit++)
		dest[digit] = '\0';

	return (dest);
}
