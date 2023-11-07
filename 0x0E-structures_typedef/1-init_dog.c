#include "dog.h"

/**
 * init_dog - nitialize a variable of type struct dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * @d: its pointer to point of struct element
 * Return: void
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
