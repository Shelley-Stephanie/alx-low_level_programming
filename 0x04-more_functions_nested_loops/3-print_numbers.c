#include <stdio.h>
#include "main.h"
/**
 *print_numbers - prints numbers
 *Return: 0
 **/
void print_numbers(void)
{
char c;

while (c <= '9')
{
	_putchar(c + '0');
	c++;
}
_putchar('\n');
}
