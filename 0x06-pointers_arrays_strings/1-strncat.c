#include "main.h"

/**
 *   *_strncat - omar maher
 *
 * @dest: om
 *
 *       @src :omj
 *
 *         @n: ommm
 *     Return: return 1 or 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;
	while (dest[c])
		c++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];

	dest[c + i] = '\0';

	return (dest);
}
