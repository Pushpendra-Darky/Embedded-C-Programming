/*  q2-- Write a program to perform addition of two int or char or float numbers.
    • If we need to do the addition of two integers then it should compile the code related to the addition of integers.
    • If we need to do the addition of two float then it should compile the code related to the addition of float numbers.
    • Use conditional compilation

*/


#include<stdio.h>

#define ADD(a,b) ((a)+(b))                                               //defining addition of two integer value
int main() 

{
	int a,b;                                                          //declare variable

#ifdef ADD                                                                //conditional compilation
	printf("Enter the two integer value:");
	scanf("%d%d",&a,&b);
	printf("Addition of two integer values is %d\n",ADD(a,b));
#else
	printf("ADDITION is Not defined");
#endif                                                                      //ending conditional compilation
	return 0;
}

