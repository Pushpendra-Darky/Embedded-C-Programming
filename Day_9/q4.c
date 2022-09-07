// q4 -- Write a program to read n number of strings using two-dimensional character array, sort them and display the sorted list of strings on the screen. (use strcmp and strcpy library functions).


#include<stdio.h>
#include<string.h>                                                                 //header file for string operation
void sort(char (*str)[50], int);                                                   //function prototyping
int main() 

{
	char str[50][50];                                                          //two dimensional char array with max 50 lines and max 50 characters in each line
	char *ptr[100];
	int i=0,j,n,c;
	
	printf("Enter no of strings:");
        scanf("%d",&n);                                                            //input for no of strings
        printf("maximum no of string is %d with maximum 50 characters:\n",n);
	for(i=0;i<n;i++)                                                           //logic for scanning strings char
	{
		char temp;
		scanf("%c",&temp);
		scanf("%[^\n]s",str[i]);
	}
	sort(str,n);                                                               //calling function
	for(i=0;i<n;i++)                                                           //logic for printing strings char
	{
		printf("\n%s",str[i]);
	}
        printf("\n");

	return 0;
}

void sort(char str[50][50], int n)                                               //function for sort strings
{
	int i,j=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(str[i],str[j]) > 0)
			{
				char temp[50];
				strcpy(temp,str[j]);
				strcpy(str[j],str[i]);
				strcpy(str[i],temp);
			}
		}
	}

}
