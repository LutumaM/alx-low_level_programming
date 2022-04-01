#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiples two arguments
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
	int x, i, j;

	if (argc != 3)
	{
		printf("ERROR\n");

		return (1);
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		x = i * j;

		printf("%d\n", x);
	}

	return (0);
}
