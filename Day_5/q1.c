// q1 - Write a C program to find the sum of all array elements.



#include<stdio.h>

int main()
{
	int arr[50];                                          // declare 1-d array with 50 size
	int sum=0,i,n;


	printf("Enter the Element of array : ");
	scanf("%d",&n);                                         // scanning the element maximum no of array

        for(i=0;i<n;i++)
        {

                printf("\nEnter arr[%d] element of array\n",i);
		scanf("%d",&arr[i]);                                  // printing the array element

        }


	for(i=0;i<n;i++)
	{
	
		sum += arr[i];  // sum = sum + arr[i]                // calculating the sum of array element

	}

	printf("Sum = %d\n",sum);                                    // printing the sum of array element

	return 0;
}
