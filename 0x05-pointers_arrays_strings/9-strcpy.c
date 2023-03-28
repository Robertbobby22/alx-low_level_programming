#include "main.h"

/**
 * char *_strcpy - function that copies the string pointed to by src
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: coppy to
 * @src: coppy from
 *
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;

	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\n';
	return (dest);
}
