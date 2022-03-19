#include <stdio.h>

/**
 * isupper - Check if a letter is upper
 * @c: The letter to be checked
 *
 * Return: 1 for upper letter or 0 for anything else
 */
int isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
