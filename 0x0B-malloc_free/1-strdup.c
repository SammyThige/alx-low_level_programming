#include "main.h"

/**
 * _strdup - A function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a
 * parameter.
 * @str: An input pointer of the string to copy.
 * Return: Apointer to new string or NULL if it str is NULL
 */

char *_strdup(char *str)
{
	char *new_str;
	int i,j;

	if (str == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		;

	new_str = malloc(sizeof(char) * (j + 1));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		new_str[i] = str[i];

	new_str[i] = '\0';

	return (new_str);
}

