 /* q2-- Write a menu driven C program to implement “wc” (i.e NO. of lines, No. of characters and No. of words in given text file) utility of Linux.  
  	  Take file as an input and print the following:
    a) Number of characters
    b) Number of lines
    c) Number of words
*/


#include<stdio.h>
int countCharacters();                                              //funtion prototying of counts characters
int countWords();                                                  //funtion prototyping of words
int countLines();                                                 //funtion prototying for 

FILE *fptr;                                                      //file pointer
int main()
{
        //Check if file already exist                       
        if(fopen("student.txt","r")){                          //if file exit it open in read mode
         printf("\n File already exists...opening in read mode:");
         printf("\n Number of characters : %d",countCharacters());
	 printf("\n Number of words : %d",countWords());
	 printf("\n Number of lines : %d\n",countLines());

        }
        //create new file if file not present
        else{                                                  //else it show this
		printf("\n File does not exist..Aborting...\n");
		return -1;
        }
         return 0;
}

int countCharacters()                                        //funtion of count characters
{
	fptr=fopen("student.txt","r");
	if(fptr == NULL)
	{
		perror("file not found");
	
	}
	int ch=0;
	int c;
	while((c=fgetc(fptr)) != EOF)
	{
		if(c != ' ' || c != '\n')
			ch++;
	}
	fclose(fptr);
	return ch;
}
int countWords()                                        //function of count words
{
        int word=0;
        int c;
	fopen("student.txt","r");
	if(fptr == NULL)
        {
                perror("file not found");

        }

        while((c=fgetc(fptr)) != EOF)
        {
                if(c == ' ')
                     word++;
        }
	fclose(fptr);
        return word;
}
int countLines()                                        //function of count lines
{
        int line=0;
        int c;
	fopen("student.txt","r");
	if(fptr == NULL)
        {
                perror("file not found");

        }

        while((c=fgetc(fptr)) != EOF)
        {
                if(c == '\n')
                     line++;
        }
	fclose(fptr);
        return line;
}


