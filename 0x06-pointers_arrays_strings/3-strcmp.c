#include "main.h"

/**
 *  * _strcmp - omar maher
 *   *
 *    * @s1: om
 *     *
 *      * @s2 :omj
 *       *
 *        * Return: return 1 or 0
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			i = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (i);
}
