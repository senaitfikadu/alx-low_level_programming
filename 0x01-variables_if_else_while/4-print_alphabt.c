#include<stdio.h>

int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if(c!='q' && c!='e')
		putchar(c);
	}
	return (0);
}
