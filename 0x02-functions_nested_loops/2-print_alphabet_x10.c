#include "main.h"
/**
 * print_alphabet_x10
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	char i, e;

	for (i = 'a'; i <= 'z'; i++)
	{
	for (e = 0; e <= 10; e++)
			
		_putchar(e);
	}
		putchar('\n');

}
