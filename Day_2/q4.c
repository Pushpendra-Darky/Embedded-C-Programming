//q4= Write a C program to find the maximum of 2 numbers using Conditional operator.


#include<stdio.h>

int main()
{

	int a,b;

	printf("Enter the first value:\n");
	scanf("%d",&a);                      // scaning 1 number

	printf("Enter the second value:\n");
	scanf("%d",&b);                       // scaning 2nd number



	(a<b)?printf("second number is maximum\n"):printf("first number is maximum\n");  // applying conditional operator to compare the two number and print the maximum no


	return 0;

}
