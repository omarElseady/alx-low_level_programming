#include "main.h"

/**
 * more_numbrs - omar maher
 *
 * Return: return 1 or 0
 */

void print_most_numbers(void)
{
	int i, j, num;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j < 14; j++)
		{
			num = j;
			if (j > 9)
			{
				_putchr(1 + '0');
				num = j % 10;
			}
		}
		_putchar(num + '0');
	}

}
