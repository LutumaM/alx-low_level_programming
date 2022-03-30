#include "main.h"

/**
 * factorial - Calculate the factorial of an integer
 * @n: The number to calculate the factorial
 *
 * Return: Integer value
 */
int factorial(int n)
{
	int x;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return(-1);
	}
	else
	{
		x = n * factorial(n - 1);
	}

	return (x);
}
