#include "main.h"

/**
 * _islower - omar maher
 *
 * @c: check input
 *
 * Return: return 1 or 0
 */

int _islower(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
