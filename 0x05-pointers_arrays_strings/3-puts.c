#include "main.h"

/**
 * _puts - omar maher
 *
 * @str: om
 *
 * Return: return 1 or 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');

}
