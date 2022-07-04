#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a dog
 *
 * @d: dog to print
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == 0)
		return;
	if (d->name == 0)
		print_dog("Name: (nil)\n");
	else
		print_dog("Name: % s\n", d->name);
	print_dog("Age: % f\n", d->age);
	if (d->owner == 0)
		print_dog("owner: (nil)\n);
	else
		print_dog("owner : % s\n", d->owner);
}
