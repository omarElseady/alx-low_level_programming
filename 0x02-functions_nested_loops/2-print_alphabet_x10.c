#include "main.h"

/**
 * print_alphabet_x10 - omar maher
 */

void print_alphabet_x10(void)
{
	for (int i = 0; i < 10; i++)
	{
		int ch = 'a';

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}

}
