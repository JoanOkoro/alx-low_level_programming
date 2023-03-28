#include "main.h"
#include <unistd.h>

/**
 * _putchar - Prints a string followed by a new line to stdout
 * @str: The string to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropiately.
 */
int _putchar(char c)
{
return(write(1, &c, 1));
}
