/* q2-Write a program to find the GCD of two numbers. Take two integers as input, find the GCD and return it to main.*/


#include<stdio.h>

int main()

{

        int num1,num2,i,GCD;                             // declare num1,num2,i,gcd for greatest common diviser

        printf("Enter the two no:\n");
        scanf("%d%d",&num1,&num2);                        //scaning the two number

        for(i=1;(i<=num1) && (i<=num2);i++)
        {
                if((num1 % i == 0) && (num2% i == 0))          // appying for loop and in if condition and using and operator
                {

                        GCD=i;                              //passing value of i in gcd 0 or 1
                }
        }

        printf("GCD of Two No is: %d\n",GCD);               // printing the gcd


        return 0;
}
