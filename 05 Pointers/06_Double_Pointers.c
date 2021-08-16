#include <stdio.h>

int main()
{
	int i=10, *j, **k;

	j = &i;
	k = &j;

	printf("\nValue of j: %u", j);
	printf("\nAddress of of j: %u", &j);
	printf("\nValue of k: %u", k);
	printf("\nAddress of of k: %u", &k);

	printf("\nValue of j using k: %u", *k);
	printf("\nValue of i using k: %u", **k);
	printf("\nOperation 10***k: %d", 10*(**k));

	return 0;
}