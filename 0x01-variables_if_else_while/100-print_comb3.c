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
	int a = 0;


	for (int i = 0 ; i < 10 ; i++)
	{
		for (int j = i + 1 ; j < 10 ; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i == 8 && j == 9)
			{
				break;
			}
			putchar(44);
			putchar(' ');
		}

	}
	putchar('\n');

	return (0);
}
