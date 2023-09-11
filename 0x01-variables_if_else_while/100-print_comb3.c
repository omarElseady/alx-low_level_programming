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
	int i = 0, j = 0;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (j != i && i < j)
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

			j++;
		}

		i++;
	}
	putchar('\n');

	return (0);
}
