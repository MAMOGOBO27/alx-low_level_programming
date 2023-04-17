#ifndef DOG_H
#define DOG_H

/**
 * struck dog  - its the dog's information
 * @name: First Input
 * @age: Second Input
 * @owner: Third Input
 *
 * Describtion: The Basic Information of dogs
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typef for struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
