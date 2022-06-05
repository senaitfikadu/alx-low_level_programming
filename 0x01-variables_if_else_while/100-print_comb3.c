#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 *
 * Return: 0
 */
int main(void)
{
	int s, e;

	for (s = 48; s <= 57; s++)
	{
	for (e = 48; e <= 57; e++)
	{
	if (s == e || e <= s)
	{
	}
	else
	{
	putchar(s);
	putchar(e);
	if (s ==  56 && e == 57)
	{
	}
	else
	{
	putchar(44);
	putchar(' ');
	}
	}
	}
	}
	putchar(('\n');
	return (0);
	}
