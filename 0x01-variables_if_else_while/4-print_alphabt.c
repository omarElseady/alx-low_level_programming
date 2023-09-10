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

	while (c <= 'z')
	{
		if (c == 'q' || c == 'e')
		{
			c++;
			continue;
		}
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}

