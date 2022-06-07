#include "main.h"

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	char *putchr;

	for (putchr = "_putchar\n"; *putchr != '\0'; ++putchr)
		_putchar(*putchr);
	return (0);
}
