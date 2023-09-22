#include "main.h"

/**
 *  * *cap_string - omar maher
 *   *
 *    * @s: om
 *     *
 *      * Return: return 1 or 0
 */

char *cap_string(char *s)
{
	char *ptr = s;
	int foundDelimit = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			found = 1;
		else if (islower(*s) && foundDelimit)
		{
			*s -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		s++;
	}
	return (ptr);
}
