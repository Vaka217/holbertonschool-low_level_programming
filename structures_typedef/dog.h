#ifndef dog_h
#define dog_h

/**
  * struct dog - Description of a dog.
  * @name: Name of a dog.
  * @owner: Owner of a dog.
  * @age: Age of a dog.
  *
  * Description: Name, owner and age of a dog.
  */

struct dog
{
	char *name, *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
