#include <stdlib.h>
#include <time.h>
/**
* main - assaign n and print it
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND - MAX / 2;
	if (n > 0)
		printf("%d is posetive/n", n);
	if else(n < 0)
		printf("%d is negative/n", n);
	if else(n == 0)
		printf("%d is Zero/n", n);
	return (0);

}
