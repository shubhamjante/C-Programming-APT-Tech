// Macros
#include <stdio.h>

#define DYP "Kolhapur, DYP"
#define JJM "Jaysingpur"
#define RIT "Islampur"

// Function declaration/prototype
void hello();


int main()
{
	#ifdef KIT
		hello();
		printf("\nJJM Macro Expansion: %s", KIT);
		printf("\nThe macro expansion is done.");
	#else
		printf("\nKIT Macro not defined");
	#endif

	printf("\nThis is normal compiler execution/flow.");
	return 0;
}


void hello()
{
	printf("\nThis is hello function.");
}