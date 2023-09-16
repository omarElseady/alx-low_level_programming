#include "main.h"

/**
 * print_diagonal - omar maher
 *
 * @n: oma
 * Return: return 1 or 0
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (j == i)
				{
					_putchar('\');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}

}
