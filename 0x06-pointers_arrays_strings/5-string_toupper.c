#include "main.h"

/**
 * string_toupper - function that changes all lowercase
 * letters of a string to uppercase
 * @str: string to be changed
 *
 * Return: result
 */
char *string_toupper(char *str)
{
	int digit = 0;

	while (str[digit])
	{
		if (str[digit] >= 'a' && str[digit] <= 'z')
			str[digit] -= 32;

		digit++;
	}

	return (str);
}
