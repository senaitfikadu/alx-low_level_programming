#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main - assaign last digit of a number
* if condition
* Return: always 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int b;
 	b = n % 10;

	if (b > 5)
		printf("%d and is greater than 5\n", n);
	else if (b == 0)
		printf("%d and is 0\n", n);
	else if (b < 6 && b != 0)
		printf("%d and is less than 6 and not 0\n", n);
	return (0);
