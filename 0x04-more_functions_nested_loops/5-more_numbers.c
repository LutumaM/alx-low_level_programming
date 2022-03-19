#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Prints the numbers 0-14 ten times
 *
 * Return: ten times the numbers 0-14
 */
void more_numbers(void)
{
	int x, y;

	for (x = 0; x <= 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			putchar((y / 10) + '0');
		}

		putchar((y % 10) + '0');
	}

	putchar('\n');
}
