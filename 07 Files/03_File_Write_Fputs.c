#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *fp;
	char s[80];

	fp = fopen("file_write.txt", "w");
	if(fp == NULL)
	{
		printf("\nUnable to open a file.");
		exit(1);
	}

	printf("\nEnter something:");
	while(strlen(gets(s)) > 0)
	{
		fputs(s, fp);
		fputs("\n", fp);
	}

	fclose(fp);

	return 0;
}