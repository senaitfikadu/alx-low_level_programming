#include "main.h"
/**
 * _isupper - function that verifies if a character is uppercase
 * @c: tested character
 * Return: returns 1biif it is uppercase
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
}
