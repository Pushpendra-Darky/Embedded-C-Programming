// q3 - Write a program to convert lower case string to upper case string and vice versa.



#include<stdio.h>

int main()

{
	char str[100];
	int i, len=0;


	printf("Enter the string:\n");
	scanf("%s",str);
        /* without using tolower() and toupper()
	for(i=0;str[i] != '\0';i++)
	{
		if(str[i] >=65 && str[i] <=90)
			str[i] = str[i]+32;
		else if(str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i]-32;
	}
	printf("Output :%s\n",str);

         */

    // usig tolower() and toupper() function        
    len = sizeof(str)/sizeof(str[0]);   
    for(i = 0; i < len; i++)
    {  
        if(isupper(str[i]))
	{  
            str[i] = tolower(str[i]);  
        } 
        else if(islower(str[i]))
	{    
            str[i] = toupper(str[i]);  
        }  
    }  
    printf("output :%s\n", str);  
  
	return 0;
}
