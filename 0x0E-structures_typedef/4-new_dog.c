#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * new_dog - New dog of type dog_t
 * @name: Name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i, j, k, l;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;
	new_dog->name = malloc(sizeof(char) * (i + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(char) * (j + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		new_dog->name[k] = name[k];
	for (l = 0; l <= j; l++)
		new_dog->owner[l] = owner[l];
	new_dog->age = age;
	return (new_dog);
}

