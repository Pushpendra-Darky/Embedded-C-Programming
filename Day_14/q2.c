/* q2-- Write a program to read (from standard input) the Roll No, name and marks of a student and store it in a text file (Note: Provide text file name through command line).
If the file already exists, add information to it.
*/


#include<stdio.h>
#include<stdlib.h>
struct student{                                               //structure define for student data
	int r_no;
	char name[20];
	float marks;
}st[2];

int main(int argc ,char *argv[] )                           //using command line main function
{       printf("                                              PROGRAM TO READ INPUT OF STUDENTS AND STORE IN A FILE\n");   //program name to display in terminal
	FILE *fptr;                                         //file pointer
	

        if(argc != 2)                                             
	{

		perror("\nInvalid number of arguments...");           //if arguments not equal to 2showing error
		exit(-1);
	}
	int i;
	if(fopen(argv[1],"r") != NULL)                                    
	{
		printf("\nFile already exist...opening in append mode\n");         //if file there it open in append mode by a mode
		fptr = fopen(argv[1],"a");
	}
	else
	{
		printf("\nCreating a new file\n");                                //if not there it create new file by write+ mode
		fptr = fopen(argv[1],"w+");

	}	
	for(i=0;i<2;i++)                                                          //scanning the student data
	{
		char temp;
		printf("ENTER THE ROLL NO:");
		scanf("%d",&st[i].r_no);
		printf("ENTER THE NAME:");
		scanf("%c",&temp);
		scanf("%[^\n]s",st[i].name);
		printf("ENTER THE MARKS:");
		scanf("%f",&st[i].marks);
		fprintf(fptr,"STUDENT RECORDS ADDING IN FILE:\n" "STUDENT ROLL NO: %d\n""STUDENT NAME: %s\n""STUDENT MARKS: %f\n" ,st[i].r_no,st[i].name,st[i].marks);     //printing the data in file
		

	}

	fclose(fptr);
	return 0;
}
