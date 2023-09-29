#include "main.h"

/**
 *  * _print_rev_recursion - omar maher
 *   *
 *    * @s: om
 *     *
 *      * Return: return 1 or 0
 */

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}

}
