/* q6- Write a C program to display the pattern like right angle triangle as shown pattern below.
1
2 3
4 5 6
7 8 9 10
*/



#include<stdio.h>

int main()

{
        int i,j,n,incr=0;

        printf("Enter the no: ");
        scanf("%d",&n);                        // scaning the max no of row for floyds triangle in question no is 10


        for(i=0;i<n;i++)
        {
                for(j=0;j<(i+1);j++)
                {

                    incr++;
                    printf("%d  ",incr);       //"  " for space and increasing the no 0 ton       

                }

                printf("\n");



        }

        return 0;

}
