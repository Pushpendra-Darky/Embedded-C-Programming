/* q1-- Student record management System 
Write a C program to keep records and perform statistical analysis for a class of 5 students.  The information of each student contains: 
    • RollNumber
    • Name
    • Sex
    • Exam Score.  
Do following operations
1. Add student records
2. View all student records
3. Show student who gets the maximum score
4. Show student who gets the minimum score

*/


#include<stdio.h>

struct student_record {                                                      //array type struc of 5 student
	int roll_no;
	char name[50];
	char gender;
	float exam_score;
}student[5];

int main()
{

	printf("Enter The Student Details:\n");
	int i=0;
        float highest=0;                                                      //declare float value for highest marks
        float lowest=0;                                                      //declare minimum marks for minimum marks
	
	for(i=0;i<5;i++)                                                      //for scanning data of students 
	{
		char temp;
		printf("\nStudent Name:");
                scanf("%c",&temp); // temp statement to clear buffer
	        scanf("%[^\n]",student[i].name);
		printf("Student Roll No:");
		scanf("%c",&temp); // temp statement to clear buffer
		scanf("%d",&student[i].roll_no);
		printf("Student Gender(M/F):");
         	scanf("%c",&temp); // temp statement to clear buffer
		scanf("%c",&student[i].gender);
		printf("Student Exam Score(%%):");
		scanf("%c",&temp); // temp statement to clear buffer
		scanf("%f",&student[i].exam_score);
	}

	printf("\nAll Student Record:\n");
	for(i=0;i<5;i++)                                                   //for printing the data of students
	{
		printf("\nStudent Roll No: %d \n",student[i].roll_no);
		printf("Student Name: %s \n",student[i].name);
		printf("Student Gender(M/F):%c \n",student[i].gender);
		printf("Student Exam Score: %f \n",student[i].exam_score);
		printf("\n");
	}

	float max=student[0].exam_score;                                           
	float min=student[0].exam_score;
	char *name;                                                        //declare name pointer 
	for(i=0;i<5;i++)                                                   //logic for finding the maximum marks
	{
		if(student[i].exam_score > max)
		{
		 max=student[i].exam_score;
		 name=student[i].name;
			
		}
	}
       	printf("Maximum score of student name %s and score is %f\n",name,max);    //printing the maximum no of students

	for(i=0;i<5;i++)                                                   //logic for minimum marks
        {

               if(student[i].exam_score < min)
                {
                    min = student[i].exam_score;
		    name=student[i].name;
	       	}
        }
        printf("Minumum score of student name %s and score is %f\n",name,min);  //printing the minimum no of students

	return 0;
}

