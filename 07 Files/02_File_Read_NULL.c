#include <stdio.h>

int main()
{
	FILE *fp ;
	char ch ;
	fp = fopen ( "file_not_exists.txt", "r" ) ;
	if(fp == NULL)
		printf("File not exists.");

	return 0;
}