#ifndef _dog_h_
#define _dog_h_
/**
 * struct dog - list dates about pet
 * @name: pet name
 * @age: pet age
 * @owner: pet owner name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
