#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 *
 * Return: 0
 */
int main(void)
{
	int s;
	int e;

	for (s = 48; s <= 57; s++)
	{
	for (e = 49; e <= 58; e++)
	{
	if (s < e)
		{
		putchar(s);
		putchar(e);
	if ((s < 56) || (e < 57))
	{
		putchar(44);
		putchar(32);
	}
	}
	}
	}
	putchar((1o);
	return (0);
}
