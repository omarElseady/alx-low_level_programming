#include "main.h"

/**
 * print_to_98 - omar maher
 *
 * @n: check input
 *
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%i, ", i);
		}
	}
	else
	{
		for (i = 0; i < 98; i++)
		{
			printf("%i, ", i);
		}
	}
	printf("98\n");
}
