#include "main.h"

/**
 * print_last_digit - omar maher
 *
 * @n: check input
 *
 * Return: return 1 or 0
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -1 * (n % 10);
	}
	else
	{
		n = n % 10;
	}
	_putchar(n + '0');

	return (n);

}
