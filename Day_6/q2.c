/* q2- Write a C program to perform the following operations on two strings without using string library functions.
            1 Concatenate two strings
            2 Find the length of each string
            3 Compare two strings
            4 Copy string
            5 Reverse the string
*/


#include<stdio.h>

void concat(char* ,char* );
int length(char* );
void main(void)
{
   char str1[50],str2[50],str3[50],rev[50];
   int len1=0,len2=0,len=0;
   printf("\nEnter First String:");
   scanf("%s",str1);

   len=length(str1); 
   printf("\nlength of String1 %s is %d\n",str1,len);

   printf("\nEnter Second String:");
   scanf("%s",str2);

   len=length(str2);
   printf("\nlength of String2 %s is %d\n",str2,len);


//for compare two string
    int i=0;
    while(str1[i] != '\0')
    {
        len1++;
        i++;
    }
    i=0;
    while(str2[i] != '\0')
    {
        len2++;
        i++;
    }

  	if(len1 < len2)
   	{
   		printf("\n str1 is Less than str2");
	}
	else if(len1 > len2)
   	{
   		printf("\n str2 is Less than str1");
	}
	else
   	{
   		printf("\n str1 is Equal to str2");
	}

   concat(str1,str2);
   printf("\nConcatenated string1 and string2 in str1:: %s\n",str1);
  // printf("\nlength of concatenated string %s is %d\n",concat,len);

  printf("now str1 is %s\n",str1);

//for copying strings

  for(i=0;str1[i] != '\0';i++)
    {
        str3[i] = str1[i];
    }
    str3[i] = '\0';
    printf("Copy str1 in new str3,Str3 is : %s\n", str3);




//for reverse of string
     printf("str2: %s\n",str2);
     printf("\nlen now==%d\n",len);
     int temp;
     int j = len/2;

   int count=0;
   while(str2[count] != '\0'){
       count++;
   }
   int rear=(count-1);
   for(int k=0;k<count;k++){
       rev[k]=str2[rear];
       rear--;
   }

  printf("reverse of the string str2: %s\n",rev);

}


//for concatenate strings

void concat(char *s1,char *s2)
{
     while(*s1!='\0')
             s1++;

     while(*s2!='\0')
     {
            *s1=*s2;
             s1++;
             s2++;
     }
      *s1='\0';
}

//for length of the string
int length(char *s1)


{
     int l=0;
     while(*s1!='\0')
     {
           l++;
           s1++;
     }

      return l;
}

