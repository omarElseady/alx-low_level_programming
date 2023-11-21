#include "main.h"

/**
 *  * print_triangle  - omar maher
 *   *
 *    * @size: check input
 *     *
 *      * Return: return 1 or 0
 */

void print_triangle(int size)
{

      	for(int i = 0; i < size; i++)
	{
		for(int k = 0; k < size - i - 1; k++)
		{
			putchar(' ');
		}
		for(int j= (size - i); j <= 5; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
	return (0);
}
