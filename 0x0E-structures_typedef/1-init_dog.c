#include <stdio.h>
#include "dog.h"
<<<<<<< HEAD

/**
 * init_dog - is a function that initialize a variable of type struct dog
 * @d: is a pointer to struct type dog
 * @name: is a pointer to char name
 * @age: is a pointer to the float age
 * @owner: is a pointer to char owner
 * Return: void
 */

=======
#include <stdlib.h>
/**
 * init_dog - Initialize a variable of type struct dog.
 * @d: Variable to initialize.
 * @name: Dog's name.
 * @age: Dog's age.
 * @owner: Dog's owner.
 **/
>>>>>>> acf5927cee55f35521b77a8517f5625c81f48e44
void init_dog(struct dog *d, char *name, float age, char *owner)

{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
