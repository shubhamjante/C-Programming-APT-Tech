#include <stdio.h>

int function1(int);
int function2();

int j;


int main()
{
	extern int a;
	//a = 10;
	printf("\nValue of extern a: %d", a);

	printf("\nDefault Value of j: %d", j);

	j++;
	j++;
	++j;

	++j;
	j--;

	function2();
	return 0;
}

int function2()
{
	printf("\nValue of j in function2: %d", j);
}

int a =20;