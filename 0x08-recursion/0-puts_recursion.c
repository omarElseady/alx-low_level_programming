#include "main.h"

/**
 *  * _puts_recursion - omar maher
 *   *
 *    * @s: om
 *     *
 *      * Return: return 1 or 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
	}
	else
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
}
