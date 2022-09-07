// q5 -  Write a C Program to Reversing the 1-D Array Elements.




#include<stdio.h>


int main()

{
	int arr[50];
	int n,i,j;
        
	//Scanning size of array.
	printf("Enter the no of array size : ");
	scanf("%d",&n);

        //Scanning each element of array.
	for(i=0;i<n;i++)
        {
                printf("\n Enter arr[%d]:",i);
		scanf("%d",&arr[i]);
        }

	//Printing original array.
        printf("\n Original Array \n");
	for(i=0;i<n;i++)
	{
		printf("\narr[%d]=[%d]",i,arr[i]);
       	}

    
        //Logic for reversing the array.
	for(i=0;i<n/2;i++)
	{
		int temp;
		temp=arr[i];
		arr[i]=arr[n-i-1];
                arr[n-i-1]=temp;
	}

	//Printing reversed array.
	printf("\n Array Reversed is :\n");
	for(i=0;i<n;i++){
	printf("\n arr[%d]=%d",i,arr[i]);
	}

	return 0;

}
