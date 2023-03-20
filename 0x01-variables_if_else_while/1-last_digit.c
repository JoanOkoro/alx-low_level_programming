#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
*/

int main(void)
{

int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 5)
printf("%s %d %s and is greater than 5\n", Last digit of, n, is);

if (n == 0)
printf("%s %d %s and is 0\n", Last digit of, n, is);

if (n < 6 && != 0)
printf("%s %d %s and is less than 6 and not 0\n", Last digit of, n, is);

return (0);

}
