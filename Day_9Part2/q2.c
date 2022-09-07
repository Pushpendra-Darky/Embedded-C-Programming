/* q2--

 A C program contains the following declaration 

char *color[6] = {“red”, “green”, “blue”, “white”, “black”, “yellow”}; 
a. What is the meaning of color? 
b. What is the meaning of (color+2); 
c. What is the value of *color? 
d. What is the value of *(color+2)? 
e. How do color[5] and *(color + 5) differ?

*/

#include<stdio.h>
int main()

{
	char *color[6]={"red","green","blue","white","black","yellow"};             //*color[6] is a char pointer base address ,values from 0 to 5

                printf("meaning of color is       %p\n", color);                    //printing address of color[0]

         	printf("value of (color+2) is     %p\n", (color+2) );               //printing value of (color+2)

		printf("value of *(color) is      %s\n", *color );                 //printing value of *(color+2)

		printf("value of *(color+2)       %s\n", *(color+2) );             //printing value of *(color+2)

		printf("color[5] is %p , *(color+5) is %s\n", color[5], *(color+5) );   

	return 0;

}
