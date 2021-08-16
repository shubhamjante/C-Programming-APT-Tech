#include <stdio.h>
#include <stdlib.h>

//Declaration of a function
//return-type, with argument
double addition(double, double);
double subtraction(double, double);
double multiplication(double, double);
double division(double, double);

void main()
{
	int option;
	do
	{
		double num1, num2, result;
		printf("\nEnter your option:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\nYour option:");
		scanf("%d", &option);
		printf("\nEnter two numbers:");
		scanf("%lf %lf", &num1, &num2);
		switch(option)
		{
			case 1:
				printf("\nThe result is: %lf", addition(num1, num2));
				break;
			case 2:
				printf("\nThe result is: %lf", subtraction(num1, num2));
				break;
			case 3:
				printf("\nThe result is: %lf", multiplication(num1, num2));
				break;
			case 4:
				num2==0 ? printf("\nUnambigious operation for division.")
						: printf("\nThe result is: %lf", division(num1, num2));
				break;
			case 5:
				exit(1);
			default:
				printf("Please select correct option.");

		}
	}while(option != 5);

}

double addition(double num1, double num2)
{
	return num1 + num2;
}

double subtraction(double a, double b)
{
	//printf("\nSubtraction is:%lf", a-b);
	return a - b;
}

double multiplication(double num1, double num2)
{
	//printf("\nMultiplication is:%lf", num1*num2);
	return num1 * num2;
}

double division(double num1, double num2)
{
	//printf("\nDivision is:%lf", num1/num2);
	return num1 / num2;
}