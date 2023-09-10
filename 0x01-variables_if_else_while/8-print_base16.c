#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point
 *
 *Description: digit from 0 to 9
 *
 *Return: 0 (success)
 */

int main(void)
{
	char a = 0;
	char b = 'a';

	while (a <= 9)
	{
		putchar(a + '0');
		a++;
	}
	while (b <= 'f')
	{
		putchar(b);
		b++;
	}

	putchar('\n');


	return (0);
}
