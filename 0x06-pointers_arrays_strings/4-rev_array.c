#include "main.h"

/**
 * reverse_array - Reverses the array
 * @a: Array
 * @n: Integer
 *
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int i, c;

	for (i = 0; (i < (n - 1) / 2); i++)
	{
		c = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = c;
	}

}
