#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point
 *
 *Description: alphabt z to a
 *
 *Return: 0 (success)
 */

int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');

	return (0);
}
