#include "stdio.h"

/**
 * main - To print the number of argument passed
 * to a program
 * @arg_count: To count the number of argument
 * @arg_vector: To print the name of argument
 * Return: 0.
 */

int main(int arg_count, char *arg_vector[] __attribute__ ((unused)))
{
	printf("%d\n", arg_count - 1);
	return (0);

}
