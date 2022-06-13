#include "main.h"

/**
* _puts - prints string
* @str: string
* Return: void
*/

void _puts(char *str)
{
	int char i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
		_putchar('\n');
}
