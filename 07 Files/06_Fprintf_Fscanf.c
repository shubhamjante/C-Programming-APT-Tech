#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define OR ||

int main()
{
	FILE *fp;

	char fname[20], lname[20], option='Y';

	fp = fopen("file_01.txt", "w");
	if(fp == NULL)
	{
		printf("\nUnable to open a file.");
		exit(1);
	}

	do
	{
		printf("\nWhat is your firstname:");
		scanf("%s", &fname);
		printf("\nWhat is your lastname:");
		scanf("%s", &lname);
		

		fprintf(fp, "Firstname: %s\tLastname: %s\n", fname, lname);

		//fflush(stdin);
		printf("\nDo you want to add another record(Type y or Y): ");
		option = getche();

	}while(option == 'Y' OR option == 'y');

	fclose(fp);

	return 0;

}