// q1- Lower case to Uppercase: Convert a string from lower case to uppercase using pointers. Write a separate function to do the conversion. Do not use intrinsic functions.



#include<stdio.h>

void lowertoUpper(char *);                         //function prototype 

int main()

{
	char str[100];                             //string declaration of 100 max size
	char *p;                                   //character pointer declare


	printf("Enter the Lowercase string:\n");
	scanf("%s",str);                          // string input from user 

	p=str;                                    //passing address of string into pointer

	printf("String input is : %s\n",p);

        lowertoUpper(str);                        //calling function

        printf("output as Uppercase :%s",str);    //printing output of string
	printf("\n");

	return 0;

}

//lowecase to uppercase

void lowertoUpper(char *p)                        //logic for lowercase using pointer
{
	int i;
	for(i=0;(*(p+i)) != '\0';i++)
	{
		if((*(p+i)) >= 'a' && (*(p+i)) <= 'z')
			(*(p+i)) = (*(p+i))-32;
	}
}
