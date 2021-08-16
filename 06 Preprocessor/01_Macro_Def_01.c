#include<stdio.h>
#define MAX 10
#define CLRSCR "\x1B[2J"
#define AND &&
#define OR ||
#define NOT !
#define ERR printf("\nTHIS IS ERROR USING MACRO EXPANSION.")
#define f(x) (x*x)
#define CONDITION if(i==4 AND j==10)
#define LOOP for(int i=0; i<=MAX;i++)\
		printf("\nThis is using macro: %d", i)

#define g() {\
		printf("\nTHis is g.");\
		printf("\nThis is second statement.");\
	}

#define char int


int main()
{
	int j = 10;
	g();
	LOOP;

	char k = 130;
	printf("\nThis is very new: %zu", sizeof(k));


	for(int i=0; i<=MAX; i++)
	{
		printf("\nValue of i: %d", i);

		CONDITION
		{
			printf("\nThis worked because of macro expansion.");
			ERR;
			printf("\nDef: %d", 64/f(i));
		}
	}
	
	return 0;
}