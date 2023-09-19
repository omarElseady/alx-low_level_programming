#include "main.h"

/**
 * print_rev - omar maher
 *
 * @s: om
 *
 * Return: return 1 or 0
 */

void print_rev(char *s)
{
	int i = 0;


	while (s[i])
		i++;


	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}
