#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *_strdup(char *str)
{
    char *copy;
    int i;
    int len = 0;

    if (!str)
        return (NULL);

    while (str[len])
        len++;

    copy = malloc(sizeof(char) * (len + 1));
    if (!copy)
        return (NULL);

    for (i = 0; i <= len; i++)
        copy[i] = str[i];

    return (copy);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *dog;

    dog = malloc(sizeof(dog_t));
    if (!dog)
        return (NULL);

    dog->name = _strdup(name);
    if (!dog->name)
    {
        free(dog);
        return (NULL);
    }

    dog->age = age;

    dog->owner = _strdup(owner);
    if (!dog->owner)
    {
        free(dog->name);
        free(dog);
        return (NULL);
    }

    return (dog);
}