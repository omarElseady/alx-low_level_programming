#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 *main - entry point
 *
 *Description: false or true validation
 *
 *Return: 0 (success)
 */
int main(void)
{
	int n, unm;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	num = n % 10;

	if (num > 5)
			printf("Last digit of %i is %i and is greater than 5\n", n, num);
	else if (num < 6 && num != 0)
			printf("Last digit of %i is %i and is less than 6 and not 0\n", n, num);
	else if (num == 0)
			printf ("Last digit of %i is %i and is 0\n", n, num);
	return (0);
