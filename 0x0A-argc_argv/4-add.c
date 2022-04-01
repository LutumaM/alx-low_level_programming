#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Prints the sum of args positive numbers
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int x = 0, i, j;
	
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("ERROR\n");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		x += atoi(argv[i]);
	}

	printf("%d\n", x);
	return (0);
}
