#include <stdio.h>

/**
 * print_alphabet - Make the alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";

	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);
	}

	{
		putchar('\n');
	}
}
