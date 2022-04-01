#include <stdio.h>

/**
 * main - Displays number of arguements
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always zero
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
