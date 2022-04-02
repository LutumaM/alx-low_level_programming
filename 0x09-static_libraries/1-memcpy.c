#include "main.h"

/**
 * _memcpy - Copy memory area
 * @dest: Destination memory area
 * @src: Source memory area
 * @n: Bytes from memory area to copy
 *
 * Return: Memory area replaced
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
