#include <stdio.h>
/**
*main - prints the size of various types
*Return: 0 if exited properly, non-zero otherwise
*/
int main(void)
{
printf("Size of char: %d byte(s)\n", sizeof(char));
printf("Size of int: %d byte(s)\n", sizeof(int));
printf("Size of a long int: %d byte(s)\n", sizeof(long int));
printf("size of a long long int: %d byte(s)\n", sizeof(long long int));
prontf("Size of a float: %d byte(s)\n", sizeof(float));
return (0);
}
