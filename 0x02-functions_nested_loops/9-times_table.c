#include "main.h"

/**
 * times_table - omar maher
 *
 * Return: return 1 or 0
 **/

void times_table(void)
{
	int i = 0, j = 0, sum = 0;

	for (i = 0; i < 10; i++)
	{
		sum = 0;
		for (j = 0; j < 10; j++)
		{
			sum++;
			if (j * i <= 9)
			{
				_putchar((j * i) + '0');
			}
			else
			{
				_putchar(((i * j) / 10) + '0');
				_putchar(((i * j) % 10) + '0');
			}
			if (sum >= 10)
			{
				break;
			}

			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
