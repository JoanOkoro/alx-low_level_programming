#include <stdio.h>

/**
 * main - To print all arguments including
 * the first one
 * @arg_count: To count all argument
 * @arg_vector: To print all argument
 * Return: 0.
 */

int main(int arg_count __attribute__ ((unused)), char *arg_vector[])
{
	int i;

	for (i = 0; i < arg_count; i++)
	{
		printf("%s\n", arg_vector[i]);
	}

	return (0);

}
