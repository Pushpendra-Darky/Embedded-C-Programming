// q7 - Implement string library functions strlen, strcpy, strcat, strcmp with same return values and all error handling features using pointers.




#include<stdio.h>
#include<string.h>                          //header files for strings


unsigned int pstrlen(char*);                //function prototype for length 
char *pstrcpy(char *,char *);
char *concatestring(char*, char*, char*);   //function prototype for concatenate of string
void comp(char*,char*);                     //function protoype of for comparising of two string
int main()

{
	char str1[50];
	char str2[50];
	char str3[50];
        char concate[100];
        printf("Enter the two strings :\n");
	fgets(str1,50,stdin);              //scanning first string
	fgets(str2,50,stdin);              //scanning second string

        printf("str1 is : %s",str1);       //printing first string
	printf("str2 is : %s\n",str2);     //printing second string

	printf("copying str1 in new str3 %s\n",pstrcpy(str3,str1));                //printing copying two string string1 into str3
        printf("\nConcatenated string is: %s\n",concatestring(str1,str2,concate));  //printing concatenate of two string
	comp(str1,str2);
	return 0;

}

// strlen function using pointer
unsigned int pstrlen(char *p)
{
       char *str=p;
	while(*str!='\0')
		str++;
	return str-p-1;
}

// strcpy function using pointer

char *pstrcpy(char *p1,char *p2)
{
	int i=0;
	while((*(p2+i)) != '\0')
        {
             (*(p1+i)) = (*(p2+i));
	     i++;
	}
	

    return p1;
}

//concatenate

char *concatestring(char *str1, char *str2, char *concate)
{
	int i=0,count=0;
	while(*(str1+i) != '\0')
	{
		if(*(str1+i) != '\n'){
		*(concate+count) = *(str1+i);
		count++;
		}
		i++;
		
	}
        i=0;
        while(*(str2+i) != '\0')
        {
		if(*(str2+i) != '\n'){
                *(concate+count) = *(str2+i);
		count++;
		}
                i++;
                
	}
	 *(concate+count) = '\0';
	 
	 return concate;

}

// strcmp
void comp(char *str1, char *str2)
{
	int flag=0,i=0;
	if(strlen(str1) != strlen(str2))
	{
		printf("\n Strings are not equal in length !!!");
	}
	else{
	
	   while(*(str1+i) != '\0')
	   {
               if((*(str1+i) != *(str2+i)) && (*(str1+i) != (*(str2+i) +32)) && (*(str1+i) != (*(str2+i) -32)) && (*(str1+i) != '\n'))
	       { 
		       flag++;
	       }
	       i++;
           }
	   
	   if(flag == 0)
	      printf("\n Strings are equal..");
           else
	      printf("\n Strings are not equal..\n");
	}
}
