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
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
char *_strdup(char *str);
void free_dog(dog_t *d);
#endif
