#include <stdio.h>
#include <stdlib.h>

//Declaration of a function
//no return-type, no argument
void addition();
void subtraction();
void multiplication();
void division();

void main()
{
	int option;
	do
	{
		printf("\nEnter your option:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\nYour option:");
		scanf("%d", &option);
		switch(option)
		{
			case 1:
				addition();
				break;
			case 2:
				subtraction();
				break;
			case 3:
				multiplication();
				break;
			case 4:
				division();
				break;
			case 5:
				exit(1);
			default:
				printf("Please select correct option.");

		}
	}while(option != 5);

}

void addition()
{
	int num1, num2;
	printf("\nEnter two numbers:");
	scanf("%d %d", &num1, &num2);
	printf("\nAddition is:%d", num1+num2);
}

void subtraction()
{
	int num1, num2;
	printf("\nEnter two numbers:");
	scanf("%d %d", &num1, &num2);
	printf("\nSubtraction is:%d", num1-num2);
}

void multiplication()
{
	int num1, num2;
	printf("\nEnter two numbers:");
	scanf("%d %d", &num1, &num2);
	printf("\nMultiplication is:%d", num1*num2);
}

void division()
{
	int num1, num2;
	printf("\nEnter two numbers:");
	scanf("%d %d", &num1, &num2);

	if(num2 == 0)
		printf("\nCan not divide by 0. Please try again.");
	else
		printf("\nDivision is:%d", num1/num2);
}