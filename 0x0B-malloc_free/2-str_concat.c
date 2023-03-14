#include "main.h"

/**
 * str_concat - A function that concatenates two strings
 * @s1: An input pointer of the first string
 * @s2: An input pointer of the second string
 * Return: Apointer to concatened strings or NULL if it str is NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	new_str = malloc(sizeof(char) * (i + j + 1));

	if (new_str == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		new_str[k] = s1[k];
	for (l = 0; l < j; l++)
		new_str[k + l] = s2[l];

	new_str[k + l] = '\0';

	return (new_str);
}

