#include <stdio.h>
/**
 *main-Entry point
 *Return:0 if there are no erros and non zero if there are errors
 **/
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
	putchar(i);
	if (i == '9')
	{
	break;
	}
	else
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
