#include<stdio.h>

int main()
{
	int a = 10;
	char c = 'A';

	printf("\nAddress of a: %u", &a);
	printf("\nAddress of c: %u", &c);
	printf("\nValue of a: %d", a);
	printf("\nValue of a using address of a: %d", *(&a));

	return 0;
}