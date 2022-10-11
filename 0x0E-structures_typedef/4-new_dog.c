#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - new dog
 * @name: name's dog
 * @age: age's dog
 * @owner: owner's dog
 * Return: newdog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int nlen, olen, i;
	dog_t *doggy;

	while (name[nlen++])
		;
	while (owner[olen++])
		;
	doggey = malloc(sizeof(dog_t));
	if (doggy == NULL)
	free(doggy);
	return (NULL);
}
doggy->name = malloc(nlen * sizeof(doggy->name));

if (doggy == NULL)

return (NULL);

for (k = 0; k <= nlen; k++)
	doggy->name[k] = name[k];
	doggy->age = age;

doggy->owner = malloc(olen * sizeof(doggy->owner));
if (doggy == NULL)

return (NULL);
	for (k = 0; -k < olen; k++)
		doggy->owner[k] = owner[k];
return (doggy);
}
