/* q1--  Write a program to find the smallest and greatest integers among all integers, which are provided through the command line.
*/


#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])                                //using command line arguments
{
	printf("                                             PROGRAM FOR FINDING SMALLEST AND GREATEST INTEGERS NUMBER\n");    //program name display in terminal
	int n,i=0;
	int ar[50];
	int max,min;

	printf("\nENTER THE RANGE TO PRINT THE NO INTEGER VALUES MAX NUMBER RANGE >50:\n");           
	scanf("%d",&n);                                        //scanning the range of integers nummber
        
	printf("ENTER THE INTEGER VALUE:\n");
        for(i=0;i<n;i++)
	{
                	scanf("%d",&ar[i]);                   //scanning the integer values
	}

	for(i=0;i<n;i++)
	{
		printf("INTEGER VALUE ar[%d]= %d\n",i,ar[i]);      //printing the integer values
	}
        max=ar[0];                                                //defining max 
	min=ar[0];                                                //defining min
	for(i=0;i<n;i++)
	{
		if(ar[i]>max)                                    //logic for finding the max no of integer
		{
			max=ar[i];                                 
		}
		if(ar[i]<min)                                   //logic for finding minimum no
		{
			min=ar[i];                              
		}
	}
	printf("\nMAXIMUM INTEGER VALUE IS: %d\n",max);            //printing the max integer no
	printf("\nMINIUM INTEGER VALUE IS : %d\n",min);           //printing the min integer no

	return 0;
}
