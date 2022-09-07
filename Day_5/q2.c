// q2- Write a C program to count the frequency of each number in a 1-D array. All the elements in the array are integers.



#include<stdio.h>

int main()

{   
	int arr[50], freq[50];                                        // declare the 2 1d array of 50 element max size,freq is for checking the array element presence occurs
	int count,i,j,n,current_element,isDuplicate;

	printf("Enter the array size: ");
	scanf("%d",&n);                                               // scanning the array size 


	for(i=0;i<n;i++)
	{ 
		printf("value of [%d] element of array:\n",i);
		scanf("%d",&arr[i]);                                    // printing the array element
		freq[i]= 1;                                             // checking the array element occurence
	}

	for(i=0;i<n;i++)
	{
		current_element = arr[i];   
		count = 1;
		for(j=i+1;j<n;j++)
		{
			if(arr[i] == arr[j]){
				count++;
				freq[j]=0;	                    //if the no not coming again
			     
			}
		}
		if(freq[i] != 0){
			freq[i]=count;                            //putiing count value in frq
		}
	}

	for(i=0;i<n;i++)
	{
	 if(freq[i]!=0)
		 printf("\n Frequency of element %d is %d",arr[i],freq[i]);     //printing the element occurences
	}

	return 0;

}
