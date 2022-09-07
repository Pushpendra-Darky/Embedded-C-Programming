/* q4-Write a program in C to display the pattern like right angle triangle as shown pattern below.

1
12
123
1234
*/



#include<stdio.h>

int main()

{
       int i,j,n;


       printf("Enter the no: ");
       scanf("%d",&n);                     // scaning the max no of rows for floyds triangle in question its 4

       for(i=0;i<n;i++)
       {
          for(j=1;j<=i+1;j++)
          {
                  printf("%d",j);           // applying row and col for flods and print col
           }

          printf("\n");
       }

        return 0;

}
