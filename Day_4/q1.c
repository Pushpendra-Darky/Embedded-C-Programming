// q1- Write a swap function to perform the swap operation.


#include<stdio.h>
                                                         // swapping the value
int swaping(int c,int d);                                // prototying function

int main()

{
	int a, b; 
	printf("Enter the value of a and b to swap :\n");
	scanf("%d%d",&a,&b);                                 // scaning the value of a and b

	swaping(a,b);                                         // calling the function

	return 0;
}

int swaping(int c,int d)                                     // user defined funtion passing the value a and b
{

	int val;

	val = c;

	c = d;

	d = val;

	printf("Swap value of a and b : %d %d\n",c,d);           // printing swaping value of a and b
}
