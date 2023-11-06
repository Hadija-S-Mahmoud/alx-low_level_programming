#include <stdlib.h>
#include "dog.h"
/**
* _strlen - returns length
* @s: string
* Return: length
*/
int _strlen(char *s)
{
int a;
a = 0;
while (s[a] != '\0')
{
a++;
}
return (a);
}
/**
* *_strcpy - copies the string
* @dest: pointer to the bufferr
* @src: string to be copied
* Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int l, a;
l = 0;
while (src[l] != '\0')
{
l++;
}
for (a = 0; a < l; a++)
{
dest[a] = src[a];
}
dest[a] = '\0'
return (dest);
}
/**
* new_dog - function that creates a new dog
* @name: char
* @age: float
* @owner: char
* Return: NULL if function fails
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
strcpy(dog->name, name);
strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}
