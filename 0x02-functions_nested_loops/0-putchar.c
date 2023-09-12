#include "main.h"

/**
 *main - entry point
 *
 *Description: write _putchar
 *
 *Return: 0 (success)
 */

int main(void)
{
	char str[] = "_putchar";
	int c;

	for (ch = 0; c < 8; c++)
		_putchar(str[c]);
	_putchar('\n');

	return (0);
}
