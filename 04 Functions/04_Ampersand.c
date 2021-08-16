#include <stdio.h>

int main()
{
	int a;
	printf("Enter the value of a:");
	scanf("%d", &a);

	printf("\nValue of a is: %d", a);
	printf("\nAddress of a is: %p", &a);

	return 0;
}