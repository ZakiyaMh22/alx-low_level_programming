#ifndef "DOG_H"
#define "DOG_H"

/**
 * struct dog - a dog struct
 *@name: string of name of dog
 * @age: is the age of dog
 * @owner: is the parson who own the dog
 * Descripition: just a lone dog struct
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
