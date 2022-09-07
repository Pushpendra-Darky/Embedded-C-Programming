// q4-- Write a program to read the Roll No, name and marks of a student and store it in to a binary file and read student records and print on standard output (use fwrite and fread library functions).


#include<stdio.h>
#include<stdlib.h>

struct student{                                                            //structure of 3 student data
	int r_no;
	char name[20];
	float marks;
}stu[3];

int main()
{
	struct student readBuffer[3];                                    //readBUffer for reading the struct data
	FILE *fptr;                                                     //file pointer
	int i; 
	fptr = fopen("st.bin","wb+");                                    //opeing binary file in write mode

	if(fptr == NULL)
	{
		perror("ERROR IN FILE OPENING:");                       //showing error if file not open
		exit(-1);
	}

	if(fptr != NULL)
	{
		printf("FILE onening in writing mode:\n");                    

                for(i=0;i<2;i++)                                           //scanning the data
                   {
                      char temp;
                      printf("ENTER THE ROLL NO:");
                      scanf("%d",&stu[i].r_no);
                      printf("ENTER THE NAME:");
                      scanf("%c",&temp);
                      scanf("%[^\n]s",stu[i].name);
                      printf("ENTER THE MARKS:");
                      scanf("%f",&stu[i].marks);
		      fwrite(&stu[i],sizeof(struct student),1,fptr);           //writing the data in file using fwrite
		   }
	}
	fclose(fptr);                                                       //closing the write mode file
	/*Reading the binary file*/
        fptr = fopen("st.bin","rb");                                          //opening the binary file in read mode
	if(fptr == NULL)
	{
		perror("ERROR IN OPENING..");                               //showing error if not open
		exit(-1);
	}
	else
	{
		for(i=0;i<2;i++)                                             //reading the file data
		{
			fread(&readBuffer[i],sizeof(struct student),1,fptr);
			printf("\n Reading record of student [%d]",i+1);                                    
			printf("%d\n%s\n%f\n",readBuffer[i].r_no,readBuffer[i].name,readBuffer[i].marks);   //printing the data in files
		}
	
	}
	fclose(fptr);                                  //closing the file r mode file
	return 0;
}
