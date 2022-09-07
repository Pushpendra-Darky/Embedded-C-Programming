// q3-- Write a Make file for cleaning and building executables from multiple c source files, and header files. 


//-- Write a program to read and print an Employee’s details using Structure. Use array of structures and pointer to the array of structures concepts.


#include <stdio.h>
#include "MyHeader.h"
int main()
{
	struct employee emp[3];                                         //struct tag
	int  i=0;
	struct employee *ptr;                                           //struct pointer

           printf("Scanning 3 employee details");
	for(i=0;i<3;i++)                                                //printing details of emp
	{
		char temp;
		printf("Employee ID:");
		scanf("%c",&temp); // temp statement to clear buffer
		scanf("%d",&emp[i].id);

		printf("Employee Name:");
		scanf("%c",&temp); // temp statement to clear buffer
		scanf("%s[^\n]",emp[i].name);

		printf("Employee Salary:");
		scanf("%c",&temp); // temp statement to clear buffer
		scanf("%f",&emp[i].salary);

		printf("Employee Gender(M/F):");
		scanf("%c",&temp); // temp statement to clear buffer
		scanf("%c",&emp[i].gender);

	}
	ptr=emp;                                                             //passing address to pointer 

	printf("\nPrinting Eployess Details::\n");
	for(i=0;i<3;i++)                                                     //printing emp details using poniter notation
	{
		printf("Employee ID:%d\n",(ptr+i)->id);
		printf("Employee Name:%s\n",(ptr+i)->name);
		printf("Employee Salary:%f\n",(ptr+i)->salary);
		printf("Employee Gender(M/F):%c\n",(ptr+i)->gender);

	}
	return 0;
}
