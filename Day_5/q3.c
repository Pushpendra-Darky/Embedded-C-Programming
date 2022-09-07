// q3-  Write a C Program to display one dimensional array elements with addresses




#include<stdio.h>

int main()

{

	int arr[50];                                                                          // declare 1-d array of maximum size 50

	int n,i;

	printf("Enter the size of array :");
	scanf("%d",&n);                                                                       //scanning the size of array upto 50
        
	for(i=0;i<n;i++)
        {       printf("Enter the element of array[%d] : ",i);
                scanf("%d",&arr[i]);                                                           //scanning element of array

        }

	for(i=0;i<n;i++)
	{
		printf("\nValue of arr[%d]= %d and address of arr[%d]=%p\n",i,arr[i],i,&arr[i]);      // printing the element of array with address
        
	}

	return 0;
}



    
