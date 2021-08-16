#include <stdio.h>

#include<string.h>

void main()
{
	FILE *fp ;
	char ch ;
	char s[80];
	int nc=0;
	fp = fopen ( "file.txt", "r" ) ;
	while (fgets (s, 79, fp) != NULL )
	{
		//s = fgets (s, 79, fp) ;
		//if ( s == EOF )
		//	break ;
		
		//if(ch == '\n')
		//	nc++;

		printf ( "%s", s ) ;
	}
	printf ( "%d", EOF ) ;
	fclose ( fp ) ;
}