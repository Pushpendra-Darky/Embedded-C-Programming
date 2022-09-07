// q5-- Write a C program to demonstrate functionality of the fseek library function. (Use SEEK_SET, SEEK_CUR, SEEK_END. )


#include <stdio.h>
#include<stdlib.h>
int main ()
{
   FILE *fptr;                                                   //file pointer
   int c=0;                                                     //int c declare
   fptr = fopen("for_seek.txt","r");                            //file opening in reading mode

   if(fptr == NULL)                   
   {  
 	   perror("ERROR IN OPENING FILE..");                 //if file not open it shows error
	   exit(-1);
   }
   else
   {
	   printf("FILE OPENING IN SEEK_METHODS:\n");                   //else it print the file uing seek method

           fseek(fptr, 5, SEEK_CUR);                                    //SEEK_CUR going to the 5th character from starting
	   printf("\nCurrent Position = %ld",ftell(fptr));              // it tells the character posotion
	   while((c=fgetc(fptr)) != EOF)                               //printing the file after 5tg character
	   {
		   putchar(c);
	   }

	   fseek(fptr, -22, SEEK_CUR);                                //now file at in EOF so i use - , it goint -22 from EOF of file 
	   printf("\nCURRENT POSITION = %ld\n",ftell(fptr));          //it tells the character position 
	   while((c=fgetc(fptr)) != EOF)                             //and printing the file after -22
           {
                   putchar(c);
           }

	   fseek(fptr, -15, SEEK_END);                               //SEEK_END using the end position of file 
	   printf("CUREENT POSITION = %ld\n",ftell(fptr));           //it tells the position of character
	   while((c=fgetc(fptr)) != EOF)                             //printing the data -15character from  EOF, after -15 it prints the data
           {
                   putchar(c);
           }

	   fseek(fptr, -7, SEEK_END);                                //it going to the -7 position of character from the eof
	   printf("CURRENT POSITION = %ld\n",ftell(fptr));          //telling position of character
	   while((c=fgetc(fptr)) != EOF)                           //printing the data after -7 character position
           {
                   putchar(c);
           }
	   fseek(fptr, 0, SEEK_SET);                              //SEEK_SET 0 setting initial character at starting the file
	   printf("CURRENT POSITION = %ld\n",ftell(fptr));         //it tells the value of character
	   while((c=fgetc(fptr)) != EOF)                          //printing the character position 0 to EOF
           {
                   putchar(c);
           }
   }
   fclose(fptr);
   return 0;
}

