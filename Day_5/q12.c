// q12-  Write a C Program to display three-dimensional array elements with addresses




#include<stdio.h>

int main()

{
	int arr[50][50][50];                                                            // declare 3d array of 50 size each ie block,row,col

	int m,n,o,i,j,k;


	printf("Enter the no of row,col,block: \n");
	scanf("%d%d%d",&m,&n,&o);                                                      //scanning the size of block,row,column

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<o;k++)
			{
				printf("Enter the element of a[%d][%d][%d] :: ",i,j,k);

				scanf("%d",&arr[i][j][k]);                              // scanning the element of 3d matrix
			
			}
		}
	
	} 


	printf("\narr[%d][%d][%d]::\n\n",m,n,o);


	        for(i=0;i<m;i++)
               {
                  for(j=0;j<n;j++)
                  {
                        for(k=0;k<o;k++)
                        {
                                printf("\narr[%d][%d][%d]::%d  adresss of arr[%d][%d][%d]:: %p\n",i,j,k,arr[i][j][k],i,j,k,&arr[i][j][k]);    //printing the element of 3d matrix

                                                           
     
                        }
                  }

               } 



	return 0;

}
