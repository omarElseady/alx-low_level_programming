#include "main.h"

/**
 * jack_bauer - omar maher
 *
 * Return: return 1 or 0
 **/

void jack_bauer(void)
{
	for (int i = 0; i <= 23; i++)
	{
		for (int j = 0; j <= 59; j++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar('\n');
		}


	}
}
