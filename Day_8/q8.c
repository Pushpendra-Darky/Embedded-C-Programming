// q8 - Write a C program to find reverse of a string using pointers.


#include<stdio.h>
#include<string.h>

void revstr(char *);                    // function prototyping for reverse for string
char rev[50];                           // global declare revo of size 50
int main()

{
	char str[50];

	printf("Enter the charcters in string:\n");
	fgets(str, 50, stdin);                     //scanning str of array by fgets
	printf("Input string: %s\n",str);

        revstr(str);                      //calling function
        printf("Output: %s\n",rev);

	return 0;
}


void revstr(char *str)                  //function for reverse using pointer
{
      char *revptr;
      int j = strlen(str)/2;
      int count=0;
      revptr=rev;
   while((*(str+count)) != '\0')
   {

       count++;
   }

   int rear=(count-1);

   for(int k=0;k<count;k++)
   {
       (*(revptr+k))=(*(str+rear));
       rear--;
   }

}
