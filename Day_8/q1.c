// q1- Write a program to perform the swap operation.Write a swap function and use call by reference.


#include<stdio.h>

int swap(int *ptr1,int *ptr2);                                         // prototype of swap function call by refrence
int main()

{

	int a,b;

	printf("Enter the integer value of a:\n");
	scanf("%d",&a);                                               // scanning the a int value

	printf("Enter the value of b:\n");
	scanf("%d",&b);                                               // scanning the b int value
        
	printf("Value of a is %d and value of b is %d before swap\n",a,b); // printing the value of a and b before swap

	swap(&a,&b);                                                   // calling function

	printf("Value of a is %d and value of b is %d after swap\n",a,b);  // printing the value of a and b after swap

	return 0;
}

int swap(int *ptr1, int *ptr2)      // swap function
{
	int temp;
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;

	return 1;

}


	
