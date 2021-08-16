#include <stdio.h>
#include <stdlib.h>

//Declaration of a function
//no return-type, with argument
void addition(double, double);
void subtraction(double, double);
void multiplication(double, double);
void division(double, double);

void main()
{
	int option;
	do
	{
		double num1, num2;
		printf("\nEnter your option:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\nYour option:");
		scanf("%d", &option);
		printf("\nEnter two numbers:");
		scanf("%lf %lf", &num1, &num2);
		switch(option)
		{
			case 1:
				addition(num1, num2);
				break;
			case 2:
				subtraction(num1, num2);
				break;
			case 3:
				multiplication(num1, num2);
				break;
			case 4:
				num2==0 ? printf("\nUnambigious operation for division.")
						: division(num1, num2);
				break;
			case 5:
				exit(1);
			default:
				printf("Please select correct option.");

		}
	}while(option != 5);

}

void addition(double num1, double num2)
{
	printf("\nAddition is:%lf", num1+num2);
}

void subtraction(double a, double b)
{
	printf("\nSubtraction is:%lf", a-b);
}

void multiplication(double num1, double num2)
{
	printf("\nMultiplication is:%lf", num1*num2);
}

void division(double num1, double num2)
{
		printf("\nDivision is:%lf", num1/num2);
}