#include "main.h"
#include <stdio.h>
/**
 * print_to_98 
 *
 *
 * Return: always 0
 */

void print_to_98(int n)
{
	if ( n== 98)
	{
		printf("%d", n);
	}
	else if (n > 98)
	{
		while(n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	else
	{
		while(n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	printf("\n");
		
}
