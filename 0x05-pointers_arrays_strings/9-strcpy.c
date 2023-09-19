#include "main.h"

/**
 * *_strcpy - omar maher
 *
 * @dest: om
 *
 * @src: pp
 * Return: return 1 or 0
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
