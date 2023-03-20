#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - positive or negative
 *
 * Return: Always 0 (success)
 *
*/

int main(void)

{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

printf("%", n);

if (n > 0)
printf("is positive"\n);

if else(n == 0)
printf("is zero"\n);

else
printf("is negative"\n);

return (0);

}
