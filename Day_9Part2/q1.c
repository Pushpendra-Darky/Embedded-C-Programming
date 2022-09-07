/* q1--
 A C program contains the following declaration 

float table[2][3] = { { 1.1,1.2,1.3},{2.1,2.2,2.3}}; 


a) What is the meaning of a table? 
b) What is the meaning of (table+1)? 
c) What is the meaning of *(table+1)? 
d) What is the meaning of (*(table+1)+1)? 
e) What is the meaning of (*(table)+1)? 
f) What is the value of *(*(table+1) +1)? 
g) What is the value of *(*(table)+1)? 
h) What is the value of *(*(table+1)? 
i) What is the value of *(*(table) + 1)+1? 

*/

#include<stdio.h>

int main()

{
	float table[2][3] = {{1.1,1.2,1.3},{2.1,2.2,2.3}};                          //float 2d array
	int i,j;
	float (*iptr)[3];                                                           //2-d pointer notation 

	iptr=table;                                                                //passing address of table into pointer

	for(i=0;i<2;i++)                                                           
	{
		for(j=0;j<3;j++)
		{

			printf("table[%d][%d]=%.1f ",i,j, *(*(iptr + i) + j) );      // printing values of 2d table array
		}
		printf("\n");

	}

	printf("\n");



        printf( "a) table is address             %p \n", table);                   //printing of table  address  //table is a base address  of 2d float array

        printf( "b) (table+1) is address         %p\n", (table+1)  );              //printig address of (table+1) 

        printf( "c) *(table+1) is address        %p \n", *(table+1));             //printig address of *(table+1) 

        printf( "d) (*(table+1)+1 is address     %p \n", (*(table+1)+1) );         //printing address of (*(table+1)+1)  

        printf( "e) (*(table)+1) is address      %p\n", (*(table)+1) );            //printing address of (*(table)+1) 

        printf( "f) *(*(table+1)+1) is value     %.f\n", (*(*(table+1)+1)) );         // printig value of (*(*(table+1)+1))

        printf( "g *(*(table)+1) is value        %.1f\n", (*(*(table+1)+1)) );        //printig value of (*(*(table+1)+1))

        printf( "h) *(*(table+1)) is value       %.1f \n", *(* (table+1))  );         //printig value of *(* (table+1))

        printf( "i) (*(*(table)+1)+1) is value   %.1f \n", (*(*(table)+1)+1) );       // printing value of (*(*(table)+1)+1)



	return 0;
}
