/* q1--Write a program to read the Roll No, name and marks of a student and store it in a text file.
If the file already exists, add information to it. */

#include<stdio.h>
#include<string.h>
struct student {                                                              //struct for student record
	int roll_no;
	char name[20];
	float marks;
}S[50];

int main()
{
	//struct student s;
        int num,i;
	printf("\n Enter number of student max 50..\n");
	scanf("%d",&num);                                                  //scanning the range of students
        FILE *fptr;                                                       //file pointer
	//Check if file already exist
	if(fopen("student.txt","r")){                                     //opening file pointer by fopen in reading mode
	 printf("\n File already exists...opening in append mode");        //if the text file exist then it open in append mode
	 //open file in append mode
	 fptr=fopen("student.txt","a");                                  //file opening in append mode
	 if(fptr == NULL)
         {
                perror("Error in opening file");                        //if file  is null then it show error by perror
                return(-1);
         }

	}
	//create new file if file not present
	else{                                                           //otherwise it checking file if exist  open file or making new file in writing mode
	 //Open file in write mode
         fptr=fopen("student.txt","w+");
         printf("\n File does not exist..Creating new one..");
         if(fptr == NULL)
         {
                perror("Error in opening file");
                return(-1);
         }
	}
        //write the file if file is opened successfully
        if(fptr != NULL){                                              //if file not equal to null it scanning data
	for(i=0;i<num;i++){
	 printf("\n Enter roll number of student[%d]",i+1);
         scanf("%d",&S[i].roll_no);	 
	 printf("\n Enter name of student[%d]..",i+1);
         scanf("%s",S[i].name);
         printf("\n Enter marks of student[%d]",i+1);
         scanf("%f",&S[i].marks);
         fprintf(fptr,"%s%d\n%s%s\n%s%f\n","Roll num : ",S[i].roll_no,"Name : ",S[i].name,"Marks : ",S[i].marks);   //printing data in file by fprintf
	 }
	}

        //close file after writing
	fclose(fptr); 


	return 0;
}
