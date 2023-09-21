#include "main.h"

/**
 *  * *_strncpy - omar maher
 *   *
 *    * @dest: om
 *     *
 *      * @src :omj
 *       *
 *        * @n: ommm
 *         * Return: return 1 or 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
