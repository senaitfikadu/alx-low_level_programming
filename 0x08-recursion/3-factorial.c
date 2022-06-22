#include "main.h"

/**
 *factorial - factorial n
 *@n: integer
 *Return: recursion
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
