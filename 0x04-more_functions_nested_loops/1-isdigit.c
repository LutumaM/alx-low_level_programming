#include <stdio.h>

/**
 * isdigit - Checks for a digit (0-9).
 * @c: The character to be checked.
 *
 * Return: 1 if the character is a digit, 0 otherwise
 */
int isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		putchar(1);
	}

	else
	{
		putchar(0);
	}

	putchar('\n');

	return (0);
}
