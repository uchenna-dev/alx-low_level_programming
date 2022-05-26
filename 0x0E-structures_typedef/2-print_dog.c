#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: Pointer to struct
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_dog(struct dog *d)
{
	if (d != 0)
	{
		if ((*d).name != 0)
			printf("Name: %s\n", (*d).name);
		else
			printf("Name: (nil)\n");
<<<<<<< HEAD
		}
                {
		printf("Age: %f\n", d->age);
                }

		if (d->owner)
		{
			printf("Owner: %s\n", d->owner);
		}
=======
		printf("Age: %f\n", (*d).age);
		if ((*d).owner != 0)
			printf("Owner: %s\n", (*d).owner);
>>>>>>> acf5927cee55f35521b77a8517f5625c81f48e44
		else
			printf("Owner: (nil)\n");
	}
}
}
