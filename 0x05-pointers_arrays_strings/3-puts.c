#include "main.h"

/**
* _puts - prints string
* @str: string
* Return: void
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_puts(str[i]);
		i++;
	}
	_puts('\n');
}
