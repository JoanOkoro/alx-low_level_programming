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

char c;

char letter = 'a';
while (letter <= 'z')

{
_putchar(letter);
letter++;
}

_putchar('\n');


return (0);

}
