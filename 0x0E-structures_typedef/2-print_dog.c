#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
*print_dog - prints tha data of the structure dog
*@d: structure
*Return: (0)
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nill)");
		printf("Age: %f\n", d->age ? d->age : 0);
		printf("owner: %s\n", d->owner ? d->owner : "(nill)");
	}
}
