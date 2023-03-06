#include "main.h"

/**
 * _strstr - function that locates a substring
 *
 * @haystack: pointer to the string to be searched
 * @needle: pointer to the substring to be searched for
 *
 * Return: pointer to the beginning of the located substring, or NULL if the
 * substring is not found
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (!needle[j])
		{
			return (haystack + i);
		}
	}
	return (NULL);
}

