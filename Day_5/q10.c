// q10 - Write a C program to sum: two 2-D matrices



#include<stdio.h>


void printMatrix(int[50][50],int,int);                                  // funtion prototype for printing the matrix

void scanMatrix(int[50][50],int,int);                                   // funtion prototyping for scanning the matrix

void calculateSum(int[50][50],int[50][50]);                             // funtion prototype for sum two matrix

void Transpose(int[50][50],int,int);                                    //funtion prototype for transpose of a matrix

int m1[50][50]={0}, m2[50][50]={0},sum[50][50]={0};                    // declare two matrix

int row_m1,row_m2,col_m1,col_m2;

int main()
{   
	printf("Enter the row and col of first matrix ::\n");
	scanf("%d %d",&row_m1,&col_m1);
	printf("Enter the row and col of second matrix ::\n");
        scanf("%d %d",&row_m2,&col_m2);

        //Scan first matrix
	printf("\n Enter elements for first matrix..\n");
	scanMatrix(m1,row_m1,col_m1);

        //Scan second matrix
        printf("\n Enter elements for second matrix..\n");
        scanMatrix(m2,row_m2,col_m2);

	//Calculate sum of matrices
	calculateSum(m1,m2);

	//Print matrix m1
	printf("\n Matrxi m1: \n");
	printMatrix(m1,row_m1,col_m1);
	
	//Print matrix m2
        printf("\n Matrxi m2: \n");
	printMatrix(m2,row_m2,col_m2);
	
	//Print matrix sum
        printf("\n Matrxi sum: \n");
	
	int r,c;
	if(row_m1>=row_m2)
	  r=row_m1;
	else
	  r=row_m2;
	if(col_m1>=col_m2)
	  c=col_m1;
	else
          c=col_m2;
	printMatrix(sum,r,c);

	//transpose
	printf("transpose of sum\n");
        Transpose(sum,r,c);
	return 0;
}

//Function for Printing a matrix

void printMatrix(int matrix[50][50],int row,int col)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
}

//Function for scanning elements of a matrix

void scanMatrix(int matrix[50][50],int row,int col)
{
        for(int i=0;i<row;i++)
        {
                for(int j=0;j<col;j++)
                {
			printf("\n Enter m1[%d][%d]",i,j);
                        scanf("%d",&matrix[i][j]);
                }
        }
}

//Function to calculate sum

void calculateSum(int m1[50][50],int m2[50][50])
{
	int r,c;
/*	(row_m1>=row_m2) ? (r=row_m1) : (r=row_m2);
	(col_m1>=col_m2) ? (r=col_m1) : (r=col_m2);*/     // this logic fail so i used below logic

        if(row_m1>=row_m2)
          r=row_m1;
        else
          r=row_m2;
        if(col_m1>=col_m2)
          c=col_m1;
        else
          c=col_m2;

	for(int i=0;i<r;i++)
        {
                for(int j=0;j<c;j++)
                {
                        sum[i][j] = m1[i][j]+m2[i][j];
                }
        }
}

//Function to print trasnpose of matrix  i used additional function

void Transpose(int matrix[50][50],int row,int col)
{
	 for(int i=0;i<col;i++)
        {
                for(int j=0;j<row;j++)
                {
                        printf("%d ",matrix[j][i]);
                }
                printf("\n");
        }

}

