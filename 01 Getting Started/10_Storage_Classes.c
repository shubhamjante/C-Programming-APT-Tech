#include <stdio.h>

int function(int);
int function_life();

int main()
{
	static int i;

	printf("\nDefault value of i: %d", i);
	i=10;

	printf("\nNew value of i: %d", i);
	function(i);
	printf("\nNew value of i: %d", i);

	while(i <= 13)
	{
		printf("\nCalling function_life and value of j: %d", function_life());
		i++;
	}

	return 0;
}

int function_life()
{
	static int j;

	++j;

	return j;
}

int function(int j)
{
	++j;

	return 0;

}