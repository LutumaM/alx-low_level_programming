#include "main.h"

/**
 * _strpbrk - Search a string for any set of bytes
 * @s: Source string
 * @accept: Accepted characters
 *
 * Return: The string since the first found accepted character
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}

			b++;
		}

		a++;
	}

	return ('\0');
}
