#include "main.h"

/**
 * string_toupper - Change from lowercase to uppercase
 * @s: The string
 *
 * Return: char
 */
char *string_toupper(char *s)
{
	int i;
	i = 0;

	while (*(s + 1))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}

	return (s);
}
