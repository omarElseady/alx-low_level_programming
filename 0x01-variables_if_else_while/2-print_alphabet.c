#include<stdio.h>

/**
 *main - entry point
 *
 *Description: write alphabet
 *
 *Return: 0 (success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}

