#include "main.h"
/**
* _islower - print islower
* @c: c is an ascii character
*
* Return: always 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
