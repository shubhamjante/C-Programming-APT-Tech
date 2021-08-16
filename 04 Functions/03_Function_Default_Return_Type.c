#include <stdio.h>

float square(float);

void main()
{
	float a, b;
	printf("Enter a numbers:");
	scanf("%f", &a);

	b = square(a);
	printf("\nSquare of %f is %f", a, b);
}

float square(float x)
{
	return x*x;
}