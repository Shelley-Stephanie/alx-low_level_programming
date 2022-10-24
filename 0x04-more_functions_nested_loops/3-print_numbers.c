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
	putchar(c + '0');
	c++;
	}	
	putchar('\n');
}
