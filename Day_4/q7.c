// q7- Write a function to swap contents of two variables using functions.


#include<stdio.h>

int swaping(int* ,int*);                                    // prototype of swapping function content

int main()

{
        int a, b;
        printf("Enter the value of a and b to swap :\n");
        scanf("%d%d",&a,&b);                                   // scanning the value of two number

        swaping(&a,&b);                                       // calling swap function passing address

	printf("Swap Val a and b : %d and %d\n",a,b);          // printing the swap value of a and b

        return 0;
}

int swaping(int* c ,int* d)                                 // swaping function for content of value

{

        int val;

        val = *c;

        *c = *d;

        *d = val;
}

