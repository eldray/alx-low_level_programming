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
	dog_t *doggey;

	while (name[nlen++])
		;
	while (owner[olen++])
		;
	doggey = malloc(sizeof(dog_t));
	if (doggey == NULL)
	free(doggey);
	return (NULL);
}
doggey->name = malloc(nlen * sizeof(doggey->name));

if (doggey == NULL)

return (NULL);

for (k = 0; k <= nlen; k++)
	doggey->name[k] = name[k];
	doggey->age = age;

doggey->owner = malloc(olen * sizeof(doggey->owner));
if (doggey == NULL)

return (NULL);
	for (k = 0; k < olen; k++)
		doggey->owner[k] = owner[k];
return (doggey);
}
