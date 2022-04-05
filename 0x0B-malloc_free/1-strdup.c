#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string
 * @str: The string to duplicate
 *
 * Return: The string duplicated
 */
char *_strdup(char *str)
{
	char *s;
	int i, l = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		i++;

	s  = malloc(sizeof(char) * (l + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		s[i] = str[i];

	s[i] = '\0';

	return (s);
}
