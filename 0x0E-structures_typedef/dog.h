#ifndef FILE_DOG
#define FILE_DOG

/**
 *struct dog - structure dog
 * @name: atribute pointer to char name's dog
 * @age: atribute float age's dog
 * @owner: atribute pointer to char owner's dog
 */

typedef struct dog
{
char *name;
float age;
char *owner;
};

dog_t;
/* Prototype for other functions*/
init _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
