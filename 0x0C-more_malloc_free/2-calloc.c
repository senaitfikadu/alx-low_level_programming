#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - allocates memory for an array;
 * @nmemb: no of elements
 * @size: size of elements
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int sizeof, i;
	void *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	sizetot = nmemb * size;
	p = malloc(sizeof);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < sizeof; i++)
	{
		*((char *)(p) + i) = 0;
	}
	return (P);
}

