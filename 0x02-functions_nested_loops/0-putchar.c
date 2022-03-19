#include <stdio.h>
#include "main.h"
/**
* main - entry point
* Return: 0 (Success)
*/
int main(void)
{
	char *v = "_putchar";
	
	while (*v)
	{
		_putchar(*v);
		v++;
	}
	_putchar('\n');
	return (0);
}
