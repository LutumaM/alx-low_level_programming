#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: first pointer to the string
 * @s2: second pointer to the string
 * @n: integer
 *
 * Return: pointer to string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0, l = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
	{
		i++;
	}

	while (s2[k])
	{
		k++;
	}

	if (n >= k)
	{
		l = i + k;
	}
	else
	{
		l = i + n;
	}

	str = malloc(sizeof(char) * l + 1);

	if (str == NULL)
		return (NULL);

	k = 0;
	while (j > i)
	{
		if (j <= i)
			str[j] = s2[j];

		if (j >= i)
		{
			str[j] = s2[k];
			k++;
		}
		j++;
	}
	str[j] = '\0';

	return (str);
}
