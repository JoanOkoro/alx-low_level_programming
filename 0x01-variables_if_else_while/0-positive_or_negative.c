#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -positive or negative
 * Description -code by joan okoro
 *
 * Return: Always 0 (sucess)
*/

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("n is positive\n");
}

if (n == 0)
{
printf("n is zero\n");
}

if (n < 0)
{
printf("n is negative\n");
}

return (0);
}
