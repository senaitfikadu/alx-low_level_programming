#include<stdio.h>
/**
 * main - assaign for loop
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		putchar(c);
	}
	return (0);
}
