#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - A function that returns a pointer
 * to a newly allocated space
 * @str: array
 * Return: On success return *str,
 * On error return NULL
 */
char *_strdup(char *str)
{
	/** strout == string output **/

	char *strout;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++);
	strout = (char *)malloc(sizeof(char) * (i + 1));

		if (strout  == NULL)
		return (NULL);

		for (j = 0; j <= i; j++)
		strout[j] = str[j];

		return (strout);
}
