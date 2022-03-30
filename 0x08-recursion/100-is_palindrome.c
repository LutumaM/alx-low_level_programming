#include "main.h"

/**
 * _strlen_recursion - Length of a string
 * @s: The string
 *
 * Return: Integer
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}

	return (1);
}

/**
 * check_palindrome - Checks to see if a string is a palindrome
 * @i: Integer
 * @j: Integer
 * @s: The string
 *
 * Return: Integer
 */
int check_palindrome(int i, int j, char *s)
{
	if (i >= j)
	{
		return (1);
	}
	else if (s[i] != s[j])
	{
		return (0);
	}
	else
	{
		return (check_palindrome(i + 1, j - 1, s));
	}

}

/**
 * is_palindrome - States whether a string is a palindrome
 * @s: The string to be checked
 *
 * Return: Integer
 */
int is_palindrome(char *s)
{
	int i;

	i = _strlen_recursion(s) - 1;
	return (check_palindrome(0, i, s));
}
