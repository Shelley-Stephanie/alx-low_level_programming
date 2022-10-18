#include <stdlib.h>
#include <time.h>
/**
 *main:-code enrty point
 *return 0 is the exit point
 *//
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
	{
	 printf("%d id positive\n",n);
	}
	else if (n<0)
	{
	printf("%d is negative\n",n);
	}
	else if (n == 0)
	printf("%d is zero\n",n);
	return (0):
}	
