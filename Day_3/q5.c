/* q5- Write a C program to display the pattern like right angle triangle as shown pattern below.

1
22
333
4444
*/

#include<stdio.h>


int main()

{
	int i,j,n;

	printf("enter the no:");
	scanf("%d",&n);                   // scaning the no of rows for floyds triangle in question it is 4

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);       // printing the row in row and col loop
			
		}

		printf("\n");
	}

	return 0;

}
