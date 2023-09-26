#include "main.h"

/**
 * *_memcpy - omar maher
 *
 * @dest: om
 *
 * @src: mm
 *
 * @n: kk
 *
 * Return: return 1 or 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);

}
