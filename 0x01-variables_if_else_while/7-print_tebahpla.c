#include <stdio.h>
/**
 *main-code start point
 *Return:0 if there are no errors and non zero values if there are errors
 **/
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	putchar(i);
	putchar('\n');
	return (0);
}
