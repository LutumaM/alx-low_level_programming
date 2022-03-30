#include "main.h"

/**
 * check - Checks to see if a number is a prime number
 * @a: integer
 * @b: integer
 *
 * Return: integer
 */
int check(int a, int b)
{
	if (b < 2 || b % a == 0)
	{
		return (0);
	}
	else if (a > b / 2)
	{
		return (1);
	}
	else
	{
		return (check(a + 1, b));
	}
}

/**
 * is_prime_number - States if the number is a prime number
 * @n: Integer
 *
 * Return: Integer
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}

	return (check(2, n));
}
