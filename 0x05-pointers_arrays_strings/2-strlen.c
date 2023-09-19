#include "main.h"

/**
 * _strlen - omar maher
 *
 * @s: om
 *
 * Return: return 1 or 0
 */

int _strlen(char *s)
{
		int o;

			for (o = 0; *s != '\0'; s++)
				++o;

			return (o);

}
