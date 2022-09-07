//Develop a C program to add two operands and store the result in one of the operand using addition assignment operator.( a+=b is same as a=a+b)

#include<stdio.h>

int main()

{ 
	int a,b,res;

	printf("Enter the operand value of a :\n");
	scanf("%d",&a);                             //scaning operand 1

	printf("Enter the operand value of b :\n");
	scanf("%d",&b);                             // scaning operand 2

	a = a+b; // a+=b is same   adding two operand
	res = a;                  // storing add value in res

	printf("a+=b:%d\n",res);   //output

	return 0;

}
