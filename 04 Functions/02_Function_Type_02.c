#include <stdio.h>
#include <stdlib.h>

//Declaration of a function
//with return-type, no argument
double addition();
double subtraction();
double multiplication();
double division();

void main()
{
	int option;
	do
	{
		double result;

		printf("\nEnter your option:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\nYour option:");
		scanf("%d", &option);
		switch(option)
		{
			case 1:
				result = addition();
				printf("\nThe result is: %lf", result);
				break;
			case 2:
				result = subtraction();
				printf("\nThe result is: %lf", result);
				break;
			case 3:
				result = multiplication();
				printf("\nThe result is: %lf", result);
				break;
			case 4:
				result = division();
				(result == -1) 	? printf("\nUnambigious operation for division.")
								: printf("\nThe result is: %lf", result);
				break;
			case 5:
				exit(1);
			default:
				printf("Please select correct option.");

		}
	}while(option != 5);

}

double addition()
{
	double num1, num2;
	printf("\nEnter two numbers:");
	scanf("%lf %lf", &num1, &num2);
	//printf("\nAddition is:%d", num1+num2);
	return num1 + num2;
}

double subtraction()
{
	double num1, num2;
	printf("\nEnter two numbers:");
	scanf("%lf %lf", &num1, &num2);
	//printf("\nSubtraction is:%d", num1-num2);
	return num1 - num2;
}

double multiplication()
{
	double num1, num2;
	printf("\nEnter two numbers:");
	scanf("%lf %lf", &num1, &num2);
	//printf("\nMultiplication is:%d", num1*num2);
	return num1 * num2;
}

double division()
{
	double num1, num2;
	printf("\nEnter two numbers:");
	scanf("%lf %lf", &num1, &num2);

	return (num2==0) ? -1 : num1 / num2;
}