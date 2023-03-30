#include "main.h"

/**
 * _strcat - function appends the src string to the dest string
 * @dest: Pointer to the string to be apended
 * @src: Source string to be appended to @dest
 *
 * Return: pointer to the destination string @dest
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
