#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define OR ||

int main()
{
	FILE *fp;

	char fname[20], lname[20], option='Y';
	int roll;

	fp = fopen("file_01.txt", "r");
	if(fp == NULL)
	{
		printf("\nUnable to open a file.");
		exit(1);
	}

	while(fscanf(fp, "Firstname: %s\tLastname: %s\n", &fname, &lname) != EOF)
	{
		printf("Firstname: %s\tLastname: %s\n", &fname, &lname);
	}

	fclose(fp);

	return 0;
}