#include <stdio.h>

int main()
{
	int *i=NULL;
	char ch='J';

	i = &ch;

	printf("\nValue of i: %u", i);
	printf("\nAddress of ch: %u", &ch);
	printf("\nValue of ch: %c", ch);

	printf("\nValue *i using int format: %d", *i);
	printf("\nValue *i using char format: %c", *i);

	return 0;
}