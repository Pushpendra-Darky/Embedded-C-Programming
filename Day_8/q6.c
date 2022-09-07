// q6- Write a C program to print all elements of two dimensional array using pointers.


#include<stdio.h>

int main()

{
	int a[50][50];                                 //declare 2d array of size [50][50]
	int m,n,i,j;                                   
	int (*ptr)[50];                               //declare 2d pointer of size 50

	printf("Enter the no of row of 2d array : ");   
	scanf("%d",&m);                                //scanning the row of 2d array


	printf("Enter the no of col of 2d array : ");
        scanf("%d",&n);                               //scanning the col of 2d matrix

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter the element of 2d array a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);                                     //scanning the 2d array element
		}

	}

	printf("\n");
	ptr=a;            // storing array element into pointer


	for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
                        printf("Enter the element of 2d array a[%d][%d] : %d ",i,j,*(*(ptr+i)+j));   //printing the 2d array elementusing pointer
                        printf("\n");
                }

        }

	return 0;

}
