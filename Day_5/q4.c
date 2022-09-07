// q4-  Write a C Program to Find Greatest Element in Array in one dimensional array.





#include<stdio.h>

int main()

{
	int arr[10];                                      //declare array of maximum size 10

	int i,j,n;

	printf("Enter the size of  array: ");
	scanf("%d",&n);                                   // scanning the size of array

	for(i=0;i<n;i++)
	{
		printf("Element of array[%d] :",i);
		scanf("%d",&arr[i]);                      // scanning the element of array
        }

       for(i=0;i<n;i++)
       {	
	      if(arr[0]<arr[i])
	      {
		      arr[0]= arr[i];                   //if the no is greater than i than base address upto n
	      }
			      
	}

       printf("\nlargest no is : %d\n",arr[0]);         // then printing the greatest element 

	return 0;


}
