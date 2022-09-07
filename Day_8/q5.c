// q5 - C program to search element in array (1-D)using pointers.


#include<stdio.h>

int main()

{
	int a[50],n,i,num_to_search;                              //declare 1d array and num to search for searching element
	int *ptr;                                                 //declare int pointer

	printf("Enter the Size of 1D array:\n");
	scanf("%d",&n);                                          //scanning array size

	for(i=0;i<n;i++)
	{
		printf("Enter the element of array a[%d]:",i);
		scanf("%d",&a[i]);                             //scanning array element
	}

	printf("\n");
	ptr=a;                                                // passing address of a into pointer

       printf("\nEnter the element of array to search : ");
       scanf("%d",&num_to_search);                            // scanning the no of search of array element
       printf("\n");
       int check=0;                                           // logic for cheack
       for(i=0;i<n;i++)
       {
	       if(ptr[i]==num_to_search)
	       {
		       printf("\n%d found at index position %d.\n",num_to_search,i); //printing no's index no
		       check=1;
	       }
       }
       if(check==0)
       {
	       printf("\nElement not found...\n");        //else printing this
       }

	return 0;

}
