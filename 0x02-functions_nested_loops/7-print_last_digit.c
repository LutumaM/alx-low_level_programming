#include <stdio.h>

/**
 * print_last_digidt - Prints the last digit of a number
 * @n:The number to be treated
 *
 * Return: Value of the last digit of number
 */
int print_last_digit(int n)
{
	int lastDig;

	if  (n >= 0)
	{
		lastDig = n %10;
	}

	else
	{
		lastDig = (n % 10) * -1;
	}

	putchar('0' + lastDig);

	return (lastDig);
}
