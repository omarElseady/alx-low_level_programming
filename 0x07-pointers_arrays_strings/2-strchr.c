#include "main.h"

/**
 * *_strchr - omar maher
 *
 * @s: om
 *
 * @c: mm
 *
 * Return: return 1 or 0
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
