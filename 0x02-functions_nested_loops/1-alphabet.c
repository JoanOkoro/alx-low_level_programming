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

print_alphabet();
char c;
for (c = 'a'; c <= 'z'; c++)

{


putchar(c);

}


putchar('\n');


return (0);

}
