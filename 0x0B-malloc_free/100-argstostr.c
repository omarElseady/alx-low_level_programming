#include "main.h"

/**
 *  * *_strlen- omar maher
 *   *
 *    * @s: om
 *     *
 *      * Return:  0
 */

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}

/**
 * *  * *argstostr- omar maher
  *   *
  *    * @ac: om
  *     *
  *      * @av: odvfv
  *       * Return: po 0
  */
char *argstostr(int ac, char **av)
{
	int i = 0, nc = 0, j = 0, cmpt = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++, nc++)
		nc += _strlen(av[i]);

	s = malloc(sizof(char) * nc + 1);
	if (s == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++; cmpt++)
			s[cmpt] = av[i][j];

		c[cmpt] =  '\n';
		cmpt++;
	}
	s[cmpt] = '\0';
	return (s);
}
