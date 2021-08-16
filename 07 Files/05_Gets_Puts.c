#include <stdio.h>
#include <string.h>

int main()
{
	char s[80];

	do
	{
		printf("\nFor exit type EXIT\nWrite a something:");
		gets(s);

		printf("\nYou typed: ");
		puts(s);
	}while(strcmp(s, "EXIT"));

	return 0;

}