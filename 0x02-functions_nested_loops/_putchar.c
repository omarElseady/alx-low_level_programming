#include <unistd.h>
#include "main.h"

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
*Rturn: On success 1,
*       On error , -1 isreturned, and errno is st appropriatly,
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
