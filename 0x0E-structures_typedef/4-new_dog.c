#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - function that  returns a string length
 * @s: parameter for string
* Return: the string length
 */
int _strlen(char *s)
{
	/*initialize variables*/
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
/**
 * *_strcpy - function that  copies the string
 * @dest: where the string is copy to
 * @src: where the string is copy from
* Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	/*initialize variables*/
	int var_l, x;

	var_l = 0;
	while (src[var_l] != '\0')
	{
		var_l++;
	}
	for (x = 0; x < var_l; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (dest);
}
/**
 * new_dog - function that creates a new dog
 * @name: parameter for name of the dog
 * @age: parameter for age of the dog
 * @owner: parameter for the owner of the dog
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	/*initialize variables*/
	int a, b;

	a = _strlen(name);
	b = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (a + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (b + 1));
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

