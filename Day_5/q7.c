// q7-  Write a program to remove the duplicate elements in an integer array.



#include<stdio.h>

int main()

{
	int arr[50];                                                  
	int i,j,n,k;

	printf("\nEnter the size of array :");
		scanf("%d",&n);                                      //scanning the value of size of array upto 50


	for(i=0;i<n;i++)
	{
		printf("\nElements of array [%d] ",i);
		scanf("%d",&arr[i]);                                //scanning the element of array

	} 
	for(i=0;i<n;i++)                                          // logic for removing the duplicate
	 {
		 for(j=i+1;j<n;j++)
		 {
			 if(arr[i]==arr[j])
			 {
			 for(k=j;k<n;k++)
			 {
				arr[k]=arr[k+1]; 
			 }
			    n--;
                            j--;

			 }
		 }
      	 }   

        for(i=0;i<n;i++)
        {
                printf("\nElements of array [%d] = %d \n",i,arr[i]);      // printing the element without duplicate

        }


	return 0;
}
