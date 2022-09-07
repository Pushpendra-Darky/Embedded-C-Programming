//q5- Write a program to reverse an integer number. Use recursion.


int reverse();

#include<stdio.h>

int reverse(int n);                                       // reverse function prototype
int rev=0;                                                // declare reverse rev value globally to us anywhere
int main()

{

        int n;

        printf("Enter the integer value to reverse: ");
        scanf("%d",&n);                                   // scanning integer value for reverse

//	reverse(n);

        printf("Reverse of Value:%d\n",reverse(n));       // calling reverse function

        return 0;

}

int reverse(int n)                                    // reverse funtion
{
	int remainder;

	if(n!=0)                                      // logic for reverse the value
	{
                remainder = n%10;
                rev = (rev * 10) + remainder;
                n= n/10;
		reverse(n);
	}
	return rev;                                // returning rev value in main 
}


