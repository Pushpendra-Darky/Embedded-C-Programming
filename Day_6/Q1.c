/*     Write a C program to perform the following operations on two strings using intrinsic functions.
    1. Concatenate two strings
    2. Find the length of each string
    3. Compare two strings
    4. Copy string
    5. Find whether string1 is the subset of the second string or not(strstr).
    */


#include<stdio.h>
#include<string.h>                //header file for string function

int main()

{
        char str1[50];
        char str2[50];
	int l;
 	 
         printf("Enter Two String :\n");
	 gets(str1); //gets() for input the data
	 gets(str2);
         
	 printf("\nBefore the Concatenate:\n");
	 puts(str1); // puts() for print the data
	 printf("Length Of the String1 : %lu\n",strlen(str1));
	 puts(str2);
	 l=strlen(str2); //strlen for length of string
         printf("Length of str2 %d\n",l);
         
	 
	 strcat(str1,str2); //Concatenate two stringh
	 printf("After the Concatenate:\n");
	 puts(str1);
	 printf("Now the length of the string: %lu\n",strlen(str1));

         
	 // copy string str1 to str2
	 printf("\nCopy to str2 in str1\n");
	 strcpy(str2,str1);
	 puts(str2);

         printf("replace Delhi to str2\n");
	 strcpy(str2,"Delhi");
	 puts(str2);

	 //strstr
	 printf("\n");

		 char s1[50]="c programming is love";
		 char s2[50]="ram";
		 char* p;
                 puts(s1);
		 puts(s2);

     		 p = strstr(s1,s2);
                 printf("\n Using of strstr(s1,s2)::\n");
     		 printf("strstr(s1,s2): %s",p);

                 printf("\n");

     return 0;

}

