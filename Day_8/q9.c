// q9- Write a program in C to count the number of vowels and consonants in a string using a pointer.



#include<stdio.h>

int main()

{
	char *ptr;                                                             //declare char pointer
	char arr[15];                                                          //array of character
	int i=0,vowels=0,consonants=0,digits=0,spaces=0,specialCharacters=0;  //declaration of variable

	printf("Enter the string :");
	fgets(arr,15,stdin);                                                 //scanning strby fget


	ptr=arr;                                                        // passing arr value in pointer


	for(i=0; (*(ptr+i)) != '\0'; i++)                             // logic for counting vowels,consonants,digits,whitespace,other speacial characters
    {

        if((*(ptr+i)) =='a' || (*(ptr+i))=='e' || (*(ptr+i)) =='i' ||(*(ptr+i)) =='o' || (*(ptr+i))=='u' || (*(ptr+i))=='A' ||(*(ptr+i))=='E' || (*(ptr+i))=='I' || (*(ptr+i))=='O' ||(*(ptr+i))=='U')
        {
            vowels++;        //if vowels comes it increase
        }
        else if(((*(ptr+i))>='a'&& (*(ptr+i))<='z') || ((*(ptr+i))>='A'&& (*(ptr+i))<='Z'))
        {
            consonants++;     // if consonants occurs in str it increase
        }
        else if((*(ptr+i))>='0' && (*(ptr+i))<='9')
        {
            digits++;         //digits increase
        }
        else if ((*(ptr+i))==' ')
        {
            spaces++;        //white space increase
        }
        else
        {
	   if((*(ptr+i)) != '\n')	//neglecting null\new line when enter
            specialCharacters++;       //other than above are considered speacial characters
	    
        }
	  
    }

    printf("\nVowels = %d",vowels);                  //printing vowels
    printf("\nConsonants = %d",consonants);          //printing consonants
    printf("\nDigits = %d",digits);                 //printings digits
    printf("\nWhite spaces = %d",spaces);           // printings white space
    printf("\nSpecial characters = %d",specialCharacters);  // printings speacialcharacters
    printf("\n");


	return 0;
}
