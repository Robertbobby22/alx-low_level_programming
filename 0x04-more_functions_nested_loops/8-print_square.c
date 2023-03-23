#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square followed by a new line
 * @size: size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i;
		int j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}