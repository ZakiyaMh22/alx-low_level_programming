#include "dog.h"

/**
 * init_dog - function initialize a variable of type struct dog
 * @d: variable of typ struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: Void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
