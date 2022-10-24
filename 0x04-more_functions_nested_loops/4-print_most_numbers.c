#include <stdio.h>
#include "main.h"
/**
 *print_most_numbers-does the exceptional printing
 *Return:exit point
 **/
void print_most_numbers(void)
{
	char n = 0;

	for (n >= '0'; n <= '9'; n++)
	{
	if (n == 2 || n == 4)
	{
	continue;
	}
	else
	{
	putchar(n);
	}
}
putchar('\n');
}
