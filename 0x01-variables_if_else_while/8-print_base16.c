#include <stdio.h>
/**
 *main-code entry point
 *Return:0 if no errors,non-zero value if there are errors
 **/
int main(void)
{
	int i;
	char hex_values[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	putchar(hex_values[i]);
	putchar('\n');
	return (0);
}
