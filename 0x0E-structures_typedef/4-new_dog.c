#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
*new_dog - create a new strcuture
*@name: dog's name
*@age: dog's age
*@owner: dog's owner
*Return: NULL if the function fails
*/

dog_t *new_dog(char *name, float age, char *owner)

{
dog_t *str;
str = malloc(sizeof(dog_t));

if (!str)
return (NULL);

str->name = malloc(strlen(name) + 1);

if (!str->name)
{
free(str);
return (NULL);
}

strcpy(str->name, name);
str->age = age;

str->owner = malloc(strlen(owner) + 1);

if (!str->owner)
{
	free(str->name);
	free(str);

return (NULL);
}
strcpy(str->owner, owner);
return (str);
}
