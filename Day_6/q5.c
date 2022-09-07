// q5- Write a C Program to Count the Number of Vowels, Consonants, digits and remaining characters in given string

#include<stdio.h>

void main()
{
    char str[200];
    int i,vowels=0,consonants=0,digits=0,spaces=0,specialCharacters=0;  //declare


    printf("Enter a string\n");
    gets(str);                   //scanning line by gets or we can use fget
    for(i=0;str[i]!='\0';i++)    //logic for checking vowels,consonants,digits and remaining character is special characters
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||str[i]=='o' || str[i]=='u' || str[i]=='A' ||str[i]=='E' || str[i]=='I' || str[i]=='O' ||str[i]=='U')
        {
            vowels++;               //if string have vowesls it increase
        }
        else if((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z'))
        {
            consonants++;          //if strings have consonants it increase
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digits++;             //if strings have digits it increase
        }
        else if (str[i]==' ')
        {
            spaces++;            //if strings have white space it increase
        }
        else
        {
            specialCharacters++; // other than above is speacial char
        }
    }

    printf("\nVowels = %d",vowels);                           // printing vowels
    printf("\nConsonants = %d",consonants);                  // printing consonants
    printf("\nDigits = %d",digits);                           // printings digits
    printf("\nWhite spaces = %d",spaces);                    // printing white space
    printf("\nSpecial characters = %d",specialCharacters);   // printing specialcharacters
    printf("\n");

}
