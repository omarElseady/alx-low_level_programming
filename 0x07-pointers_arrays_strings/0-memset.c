#include "main.h"

/**
 *  * *_memset - omar maher
 *   *
 *    * @s: om
 *     *
 *      * @b: mm
 *       *
 *        * @n: kk
 *         *
 *          * Return: return 1 or 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
