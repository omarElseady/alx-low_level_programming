#include "main.h"

/**
 *main - entry point
 *
 *Description: write _putchar
 *
 *Return: 0 (success)
 */

void print_alphabet(void)
{
	int ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

}
