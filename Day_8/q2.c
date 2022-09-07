// q2 -  Write a C program to read through an array of any type using pointers. Copy the elements of the first array to second array using pointers.Hint: a[i] = *(a+i)
 



#include<stdio.h>

int main()

{
	int a[15],new[15];                                         //declare two 1d array of size 15
	int n,i;
        int *ptr1;                                        //declare pointer
	int *ptrnew;                                               // declare pointer

	printf("Enter the array size:");
	scanf("%d",&n);                                           //scanning the size of array
        printf("\n");

	for(i=0;i<n;i++)
	{
		printf("Enter the element of array a[%d]:",i);
		scanf("%d",&a[i]);                              //scanning the element of array


	}

        ptr1 = a;                                              //base address of array in ptr1
	for(i=0;i<n;i++)
	{
		printf("value of ptr+%d=%d",i,*(ptr1+i));        //printing the value by pointer
		printf("\n");                                   
	}

        ptrnew = ptr1;                              // pointer1 value stored in ptrnew
        for(i=0;i<n;i++)
        {
                new[i] = *(ptrnew+i);                //passing value in new[]  
        }
        for(i=0;i<n;i++)
        {
                printf("copy element into new[%d]= %d\n",i,new[i]);  //printing the new array

        }

	return 0;
}
