// q9-  Write a C program to copy the elements of one 2-D array to another 2-D array




#include<stdio.h>


int main()
{
	int m1[50][50],m2[50][50];                                           //declare two 2d array m1 and m2 of maximum same row and col size 50,50
	int m,n,i,j;


	printf("Enter the rows and coloum for 1st 2d array:\n");
	scanf("%d%d",&m,&n);                                                 //scanning the row and col of m1

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		
			printf("Enter the element of array m1[%d][%d]:: ",i,j);
			scanf("%d",&m1[i][j]);                                      // scanning the element of m1
		}
	
	}

        printf("m1 is row x col : [%d][%d] : \n",m,n);                       // printing the order of m1 matrix

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",m1[i][j]);
		        printf("\t");
			m2[i][j]=m1[i][j];                                    // copy element of m1 into m2
		}

		printf("\n");
	
	}


	printf("Copy m1 to m2:\n");

	for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
                        printf("%d",m2[i][j]);                          // printing the element of m2
                        printf("\t");
                      
                }

                printf("\n");

        }

	return 0;
}
