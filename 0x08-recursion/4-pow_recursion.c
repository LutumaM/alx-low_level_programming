#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: The value to multiply
 * @y: The times to multiply the value
 *
 * Return: The value multiplied y times
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
