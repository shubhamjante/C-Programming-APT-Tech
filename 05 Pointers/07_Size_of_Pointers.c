#include <stdio.h>

int main()
{
	int i=10, *j, **k;
	char ch='J', *c;
	float f=3.14, *f1;
	double d=3.14, *d1;

	printf("\nSize of i: %zu", sizeof(i));
	printf("\nSize of *j: %zu", sizeof(j));
	printf("\nSize of **k: %zu", sizeof(k));

	printf("\nSize of ch: %zu", sizeof(ch));
	printf("\nSize of *c: %zu", sizeof(c));

	printf("\nSize of f: %zu", sizeof(f));
	printf("\nSize of *f1: %zu", sizeof(f1));

	printf("\nSize of d: %zu", sizeof(d));
	printf("\nSize of *d1: %zu", sizeof(d1));

}