#include "main.h"

/** 
 * +strchr - Locate character in string
 * @s: Source string
 * @c: Character to find
 *
 * Return: The string from charcter found
 */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}
