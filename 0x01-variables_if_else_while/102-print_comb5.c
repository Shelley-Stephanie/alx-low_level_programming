#include <stdio.h>
/**
 *main-entrance of code
 *Return:0 for no errors and non zero for errors
 **/
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
	for (j = i + 1; j <= 99; j++)
	{
	putchar('0' + i / 10);
	putchar('0' + i % 10);
	putchar(' ');
	putchar('0' + j / 10);
	putchar('0' + j % 10);
	if (i == 98 && j == 99)
	break;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
