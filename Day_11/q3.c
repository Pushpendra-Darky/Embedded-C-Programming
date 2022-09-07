//q3--  Write a program to demonstrate integer, float, character and string constants.


#include<stdio.h>

int main()

{
	int val;                                                //integer value
	char ch;                                               //character values
	float fl;                                             //float variable

	printf("Size of INTEGER=%ld\n",sizeof(val));          //printing size  of int 

	
        printf("Size of character=%ld\n",sizeof(ch));       //printing size of char

	printf("Size of float=%ld\n",sizeof(fl));           //printing the size of float


	return 0;
}
