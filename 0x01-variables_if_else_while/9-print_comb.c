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


	while (a <= 9)
	{
		putchar(a + '0');
		if (a == 9)
		{
			break;
		}
		putchar(44);
		putchar(' ');
		a++;
	}

	return (0);
}
