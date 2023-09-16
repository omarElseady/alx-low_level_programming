#include "main.h"

/**
 * print_most_numbers - omar maher
 *
 * Return: return 1 or 0
 */

void print_most_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j < 14; j++)
		{
			_putchar(j + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');

}
