#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point
 *
 *Description: write lower and upper alphabet
 *
 *Return: 0 (success)
 */

int main(void)
{
	char c = 'a';
	char o = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (o <= 'Z')
	{
		putchar(o);
		o++;
	}
	putchar('\n');

	return (0);
}

