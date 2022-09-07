// q6-  Write a C Program to sort elements in 1-D Array




#include<stdio.h>

int main()

{

	int arr[50];
	int n,i,j;
                
         
	printf("Enter the size of array :");
	scanf("%d",&n);


	for(i=0;i<n;i++)
	{
		printf("Element of array [%d] :\n",i);
		scanf("%d",&arr[i]);

        }

	//Logic for ascending order
	for(i=0;i<n;i++)
	{
	  for(j=i+1;j<n;j++)
	  {
		  if(arr[i]>arr[j])
		  {
		    int temp;
		    temp=arr[i];
		    arr[i]=arr[j];
		    arr[j]=temp;
		  }
	  }
	}


	//Logic for printing Acending array
	printf("asceding order:: \n");
        for(i=0;i<n;i++)
        {
                printf("\n Element of array [%d] : %d\n",i,arr[i]);

        }



	//Logic for descendibg order array
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]<arr[j]) 
			{
		        int temp;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp; 
	         	}
        	}
	}

	//Logic for printing descending order
	printf("\n descending order:: \n");
	for(i=0;i<n;i++)
	{
		printf("\n Element of array [%d] : %d\n",i,arr[i]);
        }
        
	return 0;

}
