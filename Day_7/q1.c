/* q1- Write a C program that declares and initializes (to any value you like) a char, an int, a double and a float. Your program should then print the address of, and value stored in, each of the variables. Use the format string "%u" [%p in hex] to print the addresses as unsigned integers.
 Hint: You can use the character “&” to find addresses.*/

#include<stdio.h>

 int i;                                      
 int *ptr1;                                    //integer pointer
 char j;
 char *ptr2;                                   //chracter pointer
 float k;                   
 float *ptr3;                                  //float pointer
 double l;
 double *ptr4;                                 // double pointer

int main()
{

	printf("Enter the integer value:\n");
	scanf("%d",&i);                       //scanning the integer value 
	ptr1 = &i;                            // address of int i in int pointer

	printf("Enter character  value:\n");
        scanf("%s",&j);                      // scanning the strings
	ptr2 = &j;                           // address of char j in char pointer

	printf("Enter the float value:\n");
        scanf("%f",&k);                       //scanning the float value
	ptr3 = &k;                            //address of k is in float pointer

	printf("Enter the double value:\n");
        scanf("%lf",&l);                     //scanning the double value
	ptr4 = &l;                           //address of double into pointer


        //printing value,address,and address in hex
	printf("address of %d is %u(in unsg int) , %p(in hex)\n", *ptr1,ptr1,ptr1);       
	printf("address of %s is %u(in unsg int) , %p(in hex)\n", ptr2,ptr2,ptr2);
        printf("address of %0.1f is %u(in unsg int) , %p(in hex)\n", *ptr3,ptr3,ptr3);
        printf("address of %lf is %u(in unsg int), %p(in hex)\n", *ptr4,ptr4,ptr4);

	return 0;
}
