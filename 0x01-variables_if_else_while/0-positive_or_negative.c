#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - positive or negative
 *
 * Return: Always 0 (Success)
 *
*/

int main(void)

{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n == 0)
print("%d is zero\n", n);

if (n > 0)
print("%d is positive\n", n);

if (n < 0)
print("%d is negative\n", n);

return (0);
}
