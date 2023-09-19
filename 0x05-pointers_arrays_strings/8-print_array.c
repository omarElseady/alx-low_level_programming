#include "main.h"

/**
 * print_array - omar maher
 *
 * @a: om
 *
 * @n: pp
 * Return: return 1 or 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
