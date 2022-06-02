#include <stdio.h>
#include <unistd.h>
/**
* main -entry function
* Return: 1
*/
int main(void)
{
char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
write(1, str, sizeof(str));
return (1);
}
