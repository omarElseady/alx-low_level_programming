#include "main.h"

/**
 * print_most_numbers - omar maher
 *
 * Return: return 1 or 0
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 4 || i == 2)
		{
			continue;
		}
		_putchar(i + '0');
	}
	_putchar('\n');

}
