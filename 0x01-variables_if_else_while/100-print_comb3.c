#include <stdio.h>
/**
* main - uses while loop
* Return: 0
*/
int main(void)
{
	int e, i;

	e = 48;
	i = 48;
	while(e < 58)
	{
		i = 48;
		while(i < 58)
		{
		if (e != i && e < i)
		{
			putchar(e);
			putchar(i);
		if(e == 57 && i == 56)
		{
			break;
			}
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	e++;
}
putchar('\n');
return (0);
}

			

