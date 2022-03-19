#include <stdio.h>

/**
 * print_numbers - Prints the numbers form 0 to 9.
 *
 * Return: The numbers from 0 to 9.
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
	}

	putchar('\n');
}
