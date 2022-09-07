// q4 - Write a program to print out all rotations of a string typed in. For eg:if the input is “Space”, the output should be: space paces acesp cespa espac.


#include <stdio.h>
#include <string.h>

int main() 
{
  char str1[100], rotate[100];          // declare two string of maximum size 100
  int  len,i
  ;
  printf("Enter word for rotation:\n");
  scanf( "%s",str1);                   //scanning string
  
  strcpy(rotate,str1);                 //copying str1 into rotate string
  strcat(rotate,str1);                 // concatenate str1 and rotate str
  
  len = strlen(str1);                 //strlen for finding lenght of string
  
  for(i=0;i<len;i++)                  // logic for rotate char in string
  {
    printf("%.*s ",len,&rotate[i]);       
  }
  printf("\n");
  return 0;

}
