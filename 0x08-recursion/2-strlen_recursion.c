#include "main.h"

/**
 *  * _strlen_recursion - omar maher
 *   *
 *    * @s: om
 *     *
 *      * Return: return 1 or 0
 */

int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s > '\0')
	{
		l += _strlen_recursion(s + 1) + 1;
	}
	return (l);

}
