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
	int i = 0, j = 0, k = 0;


	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			k = 0;
			while (k < 10)
			{
				if (i != j && i < j && j != k && j < k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');

					if (i + j + k == 24)
					{
						break;
					}
					putchar(44);
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');


	return (0);
}

