// q4-- Write a program to read and print an Employee’s details using Structure. Use array of structures and pointer to the array of structures concepts.


#include<stdio.h>

struct employee {                                                       //defining employee struct 
	int id;
	char name[20];
	float salary;
	char gender;
}emp[3];                                                                 //using array of structure for 3 employee


int main()
{
	struct employee emp[3];                                          //using struct out declare
	int  i=0;
	struct employee *ptr;                                            //declare pointer for struct


	for(i=0;i<3;i++)                                                 //logic for scanning emp details 
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
	ptr=emp;                                                         //passing address of struct to pointer

	printf("\nPrinting Eployess Details::\n");
	for(i=0;i<3;i++)                                                //logic for printing the emp details using pointer
	{
		printf("Employee ID:%d\n",(ptr+i)->id);
		printf("Employee Name:%s\n",(ptr+i)->name);
		printf("Employee Salary:%f\n",(ptr+i)->salary);
		printf("Employee Gender(M/F):%c\n",(ptr+i)->gender);

	}
	return 0;
}
