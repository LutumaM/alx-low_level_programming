#include "main.h"
#include <stdio.h>

/** 
 * +strchr - Locate character in string
 * @s: Source string
 * @c: Character to find
 *
 * Return: The string from charcter found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)

			return (s);
			s++;
	}

		if (*s == c)
		{

			return (s);
		}
		
		else

			return (NULL);
}
