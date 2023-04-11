#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints positive numbers
 * followed by a new line
 * @arg_count: To count the number of arg
 * @arg_vector: To print all the arg
 *
 * Return: If numbers contain non-digits return 1,
 * otherwise return 0.
 */

int main(int arg_count, char *arg_vector[])
{
int n = 0;
int d = 0;
int s = 0;

for (n = 1; n < arg_count; ++n)
{
for (d = 0; arg_vector[n][d]; ++d)
{
if (arg_vector[n][d] < '0' || arg_vector[n][d] >= '9')
{
printf("Error\n");
return (1);
}
}

s = s + atoi
(arg_vector[n]);
}
printf("%d\n", s);

return (0);

}
