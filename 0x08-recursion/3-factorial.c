#include "main.h"

/**
 *  * factorial - omar maher
 *   *
 *    * @n: om
 *     *
 *      * Return: return 1 or 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}

}
