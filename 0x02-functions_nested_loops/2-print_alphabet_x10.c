#include "main.h"
/**
* print_alphabet_x10 - print lowercase alphabet x 10
*
* Return: always 0
*/
void print_alphabet_x10(void)
{
	char i, e;

	for (i = 0; i < 10; i++)
	{
	for (e = 'a' ; e <= 'z'; e++)
	{
		_putchar(e);
	}
	_putchar('\n');
	}
}
