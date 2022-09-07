// q8-  Write a C Program to display two-dimensional array elements with addresses.





#include<stdio.h>

int main()

{
	int arr[50][50];                                                  //declare 2-d array with maximum size 50 ,50 row and col resp
	int i,j,m,n;

	printf("Enter the NO of Rows and col \n");
	scanf("%d%d",&m,&n);                                             // scanning the size of 2d array



	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		  printf("Integer value for[%d][%d]:: ",i,j);
		  scanf("%d",&arr[i][j]);                               // scanning the 2d array element
		}
	}

         printf("\nDisplaying [%d] x [%d] ::\n\n",m,n);

        	for(i=0;i<m;i++)
        	{
                	for(j=0;j<n;j++)
                	{
	                	printf("arr[%d][%d]=%d  address of arr[%d][%d]: %p\t",i,j,arr[i][j],i,j,&arr[i][j]);    //printing the element of 2d array
			
		               	
	                }
		    printf("\n");
	        }

	


	return 0;


}
