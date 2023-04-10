#include <stdio.h>
#include <stdlib.h>

/**
 * main - To print a name, followed by a new line
 *
 * @arg_count: count of arg
 * @arg_vector: name of arg
 * Return: EXIT_SUCCESS
 */

int main(int arg_count, char *arg_vector[])
{
	printf("arg_count = %d\n", arg_count);
	printf("%s\n", arg_vector[0]);

	return (EXIT_SUCCESS);
}
