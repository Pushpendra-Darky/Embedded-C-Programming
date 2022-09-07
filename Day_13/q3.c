// q3-- Write a program that will concatenate two files, that is append the contents of one file at the end of another file and write the results into a third file.


#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fptr1, *fptr2, *fptr_new;                    //three file pointers
	int c;

	fptr1 = fopen("student.txt","r");                 //opening in file student.txt in read mode
	fptr2 = fopen("good_m.txt","r");                  //opening file good_m.txt in read mode

	fptr_new = fopen("new_f.txt","w+");               //creating new file in write and read mode

	if(fptr1 == NULL || fptr2 == NULL || fptr_new == NULL)
	{
		perror("ERROR IN FILE");                   //if file not open it shows error
		exit (0);
	}

	while((c = fgetc(fptr1)) != EOF )                  //copying file1 data in new file
	{
              fputc(c,fptr_new);
	}
	fclose(fptr_new);
        fptr_new = fopen("new_f.txt","a");
	while((c = fgetc(fptr2)) != EOF)                      //copying file2 data in new file in  append mode
	{
		fputc(c,fptr_new);
	}
	fclose(fptr1);                                       //closing these files
	fclose(fptr2);
	fclose(fptr_new);

	return 0;
}
