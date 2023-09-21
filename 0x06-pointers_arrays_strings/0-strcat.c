#include "main.h"

/**
 * *_strcat - omar maher
 *
 * @dest: om
 *
 * @src :omj
 *
 * Return: return 1 or 0
 */

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	while (dest[c])
		c++;

	for (c2 = 0; src[c2]; c2++)
		dest[c++] = src[c2];

	return (dest);
}
