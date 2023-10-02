#include "main.h"

/**
 *  * _sqrt_recursion- omar maher
 *   *
 *    * @n: om
 *     * @val: opp
 *      * Return: return 1 or 0
 */

int square(int n, int val)
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
  * square - omat
  *  * @n: iny
  *   * @val: oomo
  *    * Return: int
  */

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
