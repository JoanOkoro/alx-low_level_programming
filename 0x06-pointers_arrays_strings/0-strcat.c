#include "main.h"
#include <stdio.h>
/**
 * *_strcat - A function that concatenates two strings
 * @src: from string
 * @dest: to string
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
int i;
int j;

i = 0;
while (dest[i] != '\0')
{
i++;

}
j = 0;
while (src[j] != '\0')
{
j++;
}
{
dest[i] = src[i];
i++;
j++;
}
dest[i] = '\0';
dest[j] = '\0';
return (dest);
}
