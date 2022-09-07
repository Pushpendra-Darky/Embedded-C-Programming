// q6- Write a C program to remove characters in a given string except alphabets



#include <stdio.h>
#include<string.h>

char removechar(char *str);                         // prototype of function

int main()
{
    char str[100];                                   // declare string of max size 100
    int j = strlen(str);
    int i;
    printf("enter the string:");
    gets(str);                                        //scanning line of string
    printf("length of string %ld\n",strlen(str));
    
    removechar(str);                                 // calling function
    
    printf("output of the string: %s\n",str);        //output 
    return 0;
}


char removechar(char *str)                       // function fpr removing characters except alphabets
{
    int i=0,j;
    
       while(str[i] != '\0')
         {
           if(!(str[i] >= 'a' && str[i] <= 'z') && !(str[i] >= 'A' && str[i] <= 'Z') && !(str[i]=='\0'))
              {
                 for(j=i;str[j] != '\0';j++)
                   {
                      str[j] = str[j+1];
                    }
                    str[j]='\0';
              }
              
              if(!(str[i] >= 'a' && str[i] <= 'z') && !(str[i] >= 'A' && str[i] <= 'Z') && !(str[i]=='\0'))
              {
                  //do nothing
              }
              else     
               i++;
         }
}
