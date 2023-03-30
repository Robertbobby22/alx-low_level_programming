#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @str: string to be encoded
 *
 * Return: pointer to the encoded string
 */
char *leet(char *str)
{
	int digx1 = 0, digx2;
	char leet[8] = {'0', 'l', '?', 'E', 'A', '?', '?', 'T'};

	while (str[digx1])
	{
		for (digx2 = 0; digx2 <= 7; digx2++)
		{
			if (str[digx1] == leet[digx2] || str[digx1] - 32 == leet[digx2])
				str[digx1] = digx2 + '0';
		}

		digx1++;
	}
	return (str);
}
