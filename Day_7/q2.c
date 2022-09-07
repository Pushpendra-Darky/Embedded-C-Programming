/* q2-  Write a C program to declare an integer and an integer pointer to it. Initialize the integer variable. Print the value of the int variable using pointer variable.
Hint: You can use dereferencing operator *. 
*/


#include<stdio.h>

int main()

{
	int i;
	int *ptr;                                //declaring int pointer


	printf("Enter the integer value:\n");
	scanf("%d",&i);                          //scanning int value


	ptr=&i;                                  //address of int to int pointer

	printf("value of i is %d\n",i);           //printing the value of i
	printf("value of int *ptr is %d\n",*ptr); // printing the value of pointer

	return 0;

}
