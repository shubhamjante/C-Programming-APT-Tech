#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char ch=' ';
	int count=0;

	fp = fopen("file_write.txt", "r");
	if(fp == NULL)
	{
		printf("\nUnable to open a file.");
		exit(1);
	}

	while(ch != EOF)
	{
		ch = fgetc(fp);
		count++;
	}

	printf("\nTotal characters in a file: %d", count);

	return 0;
}