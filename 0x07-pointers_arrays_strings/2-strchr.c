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
	do
	{
		if (*s == c)
		{
			break;
		}
		while (*s++);
	}

	return (s);
}
