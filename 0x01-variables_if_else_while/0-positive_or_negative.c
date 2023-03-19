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
printf("Enter n: ");
scanf("%d", &n);
srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("is positive\n");
}

if (n == 0)
{
printf("is zero\n");
}

if (n < 0)
{
printf("is negative\n");
}

return (0);
}
