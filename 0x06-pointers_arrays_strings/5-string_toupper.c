#include "main.h"

/**
 * string_toupper - Change all lowercase letters to uppercase.
 * @s: The string to be modified
 *
 * Return: char variable
 */
char *string_toupper(char *s)
{
	int a = 0;

	while (s[a])
	{
		if (s[a] >= 97 && s[a] <= 122)
		{
			s[a] -= 32;
		}

		a++;
	}

	return (s);
}
