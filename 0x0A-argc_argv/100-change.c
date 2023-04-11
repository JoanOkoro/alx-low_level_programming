#include <stdio.h>
#include <stdlib.h>

/**
 * main - To print a minimum number of coins
 * to make change for an amount of money
 * @arg_count: To print the number of arg
 * @arg_vector: To print all the arg
 *
 * Return: On success print 0, on error
 * print 1.
 */

int main(int arg_count, char *arg_vector[])
{
int d = 0;
int n = 0;
int s = 0;
int coins[] = {25, 10, 5, 2, 1};

if (arg_count == 1 || arg_count > 2)
{
printf("Error\n");
return (1);
}

n = atoi(arg_vector[1]);

if (n < 0)

{
printf("0\n");
return (1);
}

for (d = 0; d < 5; d++)
{
while (n >= coins[d])
{
s++;
n = n - coins[d];
}
}

printf("%d\n", s);

return (0);

}

