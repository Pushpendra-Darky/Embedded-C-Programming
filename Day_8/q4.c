/* q4 - A C program contains the following declaration 
   int x[8]= {10,20,30,40,50,60,70,80}; 
   What is the value of x? (and understand)
   What is the value of (x+2)? (and understand)
   What is the value of *x? 
   What is the value of (*x+2)? 
   What is the value of *(x+2)?.

  */




#include<stdio.h>
int main()
{
	int x[8] = {10,20,30,40,50,60,70,80};
	int *ptr;                                      //declare int ptr

	ptr=x;                                          //passing address of x to ptr

	printf("Value of x : %d\n",*ptr);               // printing question answers
	printf("Value of (x+2) : %d\n",*(ptr+2));
	printf("Value of *x : %d\n",*ptr);
	printf("Value of (*x+2) : %d\n",(*ptr+2));
	printf("Value of *(x+2) : %d\n",*(ptr+2));

	return 0;
}
