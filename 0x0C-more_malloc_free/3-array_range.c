#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - a funstion that creates an array of integers
 * @min: integer
 * @max: integer
 *
 * Return: pointer to array of integers
 */
int *array_range(int min, int max)
{
	int *p;
	int i, j = 0;

	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		p[j] = i;
		j++;
	}

	return (p);
}
