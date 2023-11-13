#ifndef DOG_H
#define DOG_H

/**
 * struct dog - check the code
 *
 * @name : prenom
 * @owner : proprio
 * @age : age
 *
 * Return: Always 0.
*/

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
