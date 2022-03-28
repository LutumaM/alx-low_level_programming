#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sum of the diagonals of a square matrix
 *
 * @a: The matrix
 * @size: The size
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int b, s1 = 0, s2 = 0;

	for (b = 0; b < size; b++)
	{
		s1 += a[b];
		a += size;
	}

	a -= size;

	for (b = 0; b < size; b++)
	{
		s2 += a[b];
		a -= size;
	}
	
	printf("%d, %d\n", s1, s2);
}
