/* q5= A C program contains the following declarations and initial assignments: 

            int  i= 8, j = 5; 
          float  x = 0.005,  y = 0.01; 
            char c = ‘c’, d = ‘d’; 
    Determine the value of each of the following expressions. 
        1 (3*i*j)%(2*d) 
        2 (i*j)%(c+2*d) / (x*y) 
        3 5 * (i + j) > 'c' 
        4 2*x+ (y== 0) 
        5 (x > y) && (i > 0) || (j < 5) */

#include<stdio.h>

int main()

{

	int i=8,j=5;
	float x=0.005,y=0.01;
	char c='c',d='d';


       
	printf("Result of 1 : %d\n ", (3*i*j) % (2*d));          //printing the result of 1st exp in question %d int result , c and d values are converte in ascii value then it is done by preceding rule


        printf("Result of 2 : %.3lf\n ", (i*j) % (c+2*d) / (x*y));  // printing the 2nd expression result in float value bcz variable have float values .3f means float value upto 3 decimal point


	 printf("Result of 3 : %d\n ", (5 * (i+j) > 'c'));   // printing result 3rd expression

	
	 printf("Result of 4 : %.3lf\n ", (2 * x + (y == 0 ) ));  // printing the 4th expression



	 printf("Result of 5 :%d\n " , (x>y) &&(i>0) || (j<5) );  // printing the 5th expression


	return 0;

}
