#include <stdio.h>

/**
 *main - entry point
 *
 *Description: digit from 0 to 9
 *
 *Return: 0 (success)
 */

int main(void)
{
	printf("size of a char: %lu byte(s)\n", sizof(char));
	printf("size of a int: %lu byte(s)\n", sizof(int));
	printf("size of a long int: %lu byte(s)\n", sizof(long int));
	printf("size of a long long int:%lu byte(s)\n", sizof(long long int));
	printf("size of a float: %lu byte(s)\n", sizof(float));
	return (0);
}
