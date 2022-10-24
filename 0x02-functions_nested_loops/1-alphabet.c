#include <stdio.h>
#include "main.h"
/**
 *print_alphabet-prints out alphabets
 *Return:Void
 **/
void print_alphabet(void)
{
	char n;

	while (n <= 'z')
	{
	putchar(n);
	n++;
	}
	putchar('\n');
}
