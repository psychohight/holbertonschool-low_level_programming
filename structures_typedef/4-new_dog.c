#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - afficher le nbr de charactere
 * @s: char
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;

	return (len);
}

/**
* _strcpy - copier
* @dest: chaine
* @src: chaine
* Return: cpy
*/
char *_strcpy(char *dest, char *src)
{
	char *cpy = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (cpy);
}

/**
 * new_dog - check the code
 * @name: ::
 * @age: ::
 * @owner: ::
 *
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(sizeof(*name));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

		_strcpy(new_dog->name, name);

	new_dog->owner = malloc(sizeof(*owner));
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;

	return (new_dog);
}
