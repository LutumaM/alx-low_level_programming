#include <stdio.h>
/**
 * main - Entry point.
 * Description program starts and ends here.
 * Return: 0 on success.
 */
int main(void)
{
	char text[8] = "_putchar";
	int i;
	for (i = 0; i < 9; i++)
	{
		putchar(text[i]);
	}
	putchar('\n');
	return (0);
}
