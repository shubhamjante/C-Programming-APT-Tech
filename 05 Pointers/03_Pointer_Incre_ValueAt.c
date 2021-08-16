#include <stdio.h>

int main()
{
	int i=3, *j, *z;
	j = &i;
	printf("\nValue of i before ++i: %d", i);

	++(*j);
	printf("\nValue of i after increment  ++(*j): %d", *j);
	printf("\nValue of i after increment  ++(*j): %d", i);

	printf("\nValue of z: %u", z);
	printf("\nValue of *z: %d", *z);

	return 0;
}