// q3 - Write a program in C to store n elements(read from standard input) in an array and print the elements using pointer.




#include<stdio.h>

int main()

{

	int a[15],n,i;                                   //declare 1d array
	int *ptr1;                                       //declare int pointer


	printf("Enter the size of array\n");
	scanf("%d",&n);                                 //scanning the array size

	for(i=0;i<n;i++)
	{
		printf("Enter the element of a[%d]:",i);
		scanf("%d",&a[i]);                        //scanning the array element
	}
	
	ptr1=a;
	for(i=0;i<n;i++)
	{
		printf("ptr1+%d = %d",i,*(ptr1+i));        // printing array element using pointer
		printf("\n");                           
	}

	return 0;

}
