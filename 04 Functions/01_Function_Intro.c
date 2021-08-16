#include<stdio.h>

void message();

int main()
{
	printf("This is main function. Now, calling message() function.\n");
	message();
	return 0;
}

void message()
{
	printf("I am message function. Not returning any value");
}