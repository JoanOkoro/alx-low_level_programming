#include "main.h"
#include <stdlib.h>

/**
 * create_array - To create an array of chars,
 * and initialize it with a specific char
 *
 * @size: size to assign
 * @c: c to design
 * description: Assign c to char
 * Return: Return NULL
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	return (NULL);

	arr = malloc(sizeof(c) * size);

	if (arr == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	arr[i] = c;

	return (arr);

}
