#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - return the length of a string
 * @s: string to evaluate
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int g;

	g = 0;

	while (s[g] != '\0')
	{
	g++;
	}
	return (g);
}

/**
 * *_strcpy - copies the string pointed to by src
 * including the termination null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, m;

	len = 0;

	while (src[len] != '\0')
	{
	len++;
	}
	for (m = 0; m < len; m++)
	{
	dest[m] = src[m];
	}
	dest[m] = '\0';
	return (dest);
}

/**
 * *new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: Pointer to the new dog (sucess), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
	free(dog);
	return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
	free(dog);
	free(dog->name);
	return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}


