#include "main.h"

/**
 *  * reverse_array - omar maher
 *   *
 *    * @a: om
 *     *
 *      * @n :omj
 *       *
 *        * Return: return 1 or 0
 */

void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
