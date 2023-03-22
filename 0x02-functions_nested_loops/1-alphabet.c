#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description - Print the lowercase alphabet
 *
 * Return: Always 0 (Success)
 *
*/

int main(void)
{

void print_alphabet(void);

char c;
for (c = 'a'; c <= 'z'; c++)
{

putchar(c);

}


putchar('\n');

print_alphabet();

return (0);

}
