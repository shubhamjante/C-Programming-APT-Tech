#include <stdio.h>

int main()
{
	int i = 3, *j;
	j = &i;

	printf("\nAddress of i: %u", &i);
	printf("\nAddress of i using j: %u", j);

	printf("\nValue of i: %d", i);
	printf("\nValue of i using j: %d", *j);

	printf("\nValue stored in j: %d", j);
	printf("\nAddress of j: %u", &j);

	return 0;
}