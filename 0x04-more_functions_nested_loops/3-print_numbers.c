#include <stdio.h>
#include "main.h"
/**
 *print_numbers- prints numbers
 *Return: Values
 **/
void print_numbers(void)
{
int c;

for (c >= '0'; c <= '9'; c++)
{
	putchar(c);
}
putchar('\n');
}
