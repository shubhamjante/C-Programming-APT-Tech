#include<stdio.h>

int main()
{
	int i = 0;

	printf("Loop with pre-increment operator:\n");
	while(++i <= 10)
	{
		printf("%d\n", i);
	}

	printf("Loop with post-increment operator:\n");
	printf("Current value of i: %d\nResetting value of i ...\n", i);
	// Resetting values of i
	i = 0;	
	while(i++ <= 10)
	{
		printf("%d\n", i);
	}

	return 0;
}