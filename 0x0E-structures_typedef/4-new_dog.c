#include <stdlib.h>
#include "dog.h"
/**
* _strlen - returns the length of a string
* @s: string
* Return: the length
*/
int _strlen(char *s)
{
int h;
h = 0;
while (s[h] != '\0')
{
h++;
}
return (h);
}
/**
* *_strcpy - copies the string pointed to
* @dest: pointer to the buffer in which we copy the string
* @src: string to be copied
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int l, i;
l = 0;
while (src[l] != '\0')
{
l++;
}
for (a = 0; a < l; a++)
{
dest[a] = src[a];
}
dest[a] = '\0';
return (dest);
}
/**
* new_dog - function that creates a new dog
* @name: name
* @age: age
* @owner: owner
* Return: pointer to the new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int l1, l2;
l1 = _strlen(name);
l2 = _strlen(owner);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (l1 + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (l2 + 1));
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
