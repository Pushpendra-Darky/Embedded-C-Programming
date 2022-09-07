// q6- Write a recursive function to find factorial of a number.



#include<stdio.h>

int fact(int );                                   //prototyping the factorial funtion
int main()
{
	int n;                             // declare  n
	printf("Enter the factorial: ");
	scanf("%d",&n);                           //scanning the value is to be factorial 
        

	//fact(n);                                 // calling function of factorial

	printf("Factorial of Value:%d\n",fact(n));

	return 0;
}


int fact(int val)                               // factorial function
{
	int fact=1;
      while(val>=1)

        {
             fact *= val;                       //fact = fact*n 
             val--;                             //decreasing the n value untill the condition
        }
      return (fact);                             // returning fact value to the main

}
