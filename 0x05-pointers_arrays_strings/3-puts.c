#include "main.h"

/**
* _puts - prints string
* @str: string
* Return: void
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_puts(*str);
		str++;
	}
		_puts('\n');
}
