#include <stdio.h>
#include "main.h"

/**
 * main  - To print the result of multiplication then store
 * in an int
 * @arg_count: To count the number of argument
 * @arg_vector: To print all argument
 *
 * Return: On success return 0, on error return 1.
 */
int main(int arg_count, char *arg_vector[])

{

int result;

if (arg_count != 3)
{
printf("Error\n");
return (1);
}

else
{
result = atoi(arg_vector[1]) * atoi(arg_vector[2]);

printf("%d\n", result);
}

return (0);

}
