// q2 - Uppercase to Lower case: Convert a string from upper case to lowercase using pointers. Write a separate function to do the conversion. Do not use intrinsic functions.



#include<stdio.h>

void Uppertolower(char *);                          //fucntion prototyping

int main()

{
        char str[100];                             //string declare max size is 100
        char *p;                                   //char pointer declare


        printf("Enter the uppercase string:\n");
        scanf("%s",str);                          //input string

        p=str;                                    //passing address to pointer

        printf("String input is : %s\n",p);

        Uppertolower(str);                        //function calling

        printf("output as lowercase :%s",str);
        printf("\n");

        return 0;

}

//uppercase to lowercase

void Uppertolower(char *p)                         //logic for uppercase to lowercase using pointer
{
        int i;
        for(i=0;(*(p+i)) != '\0';i++)
        {
                if((*(p+i)) >= 'A' && (*(p+i)) <= 'Z')
                        (*(p+i)) = (*(p+i))+32;
        }
}

