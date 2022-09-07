/* q5-- Write a C program with a function any (s1, s2). This function returns the first location (index of location) in the string s1 which matches with any string in s2 otherwise return NULL. Do not use string library functions (strstr).
 */

#include<stdio.h>

typedef struct output{                                                                          //typedef structure for passing the value
char string[50];                                                                               //global char string set with max 50 char size
int pos;                                                                                      //global variable
}OUT;
OUT function(char *,char *);                                                                 //function prototyiping
int main()
{
	OUT result;                                                                         //struct out result; declare
	char s1[50];                                                                        //string s1 of max size 50
	char s2[50];                                                                       //string s2 max s2
	char i=50;

	printf("Enter the string s1:\n");
	fgets(s1,i,stdin);                                                                //scanning first string

	printf("Enter the string s2\n");
	fgets(s2,i,stdin);                                                                //scanning second string
        printf("\n");
	printf("s1 is %s",s1);                                                            //printing string 1
	printf("s2 is %s\n",s2);                                                          //printig string 2
            
	result = function(s1,s2);                                                         //calling function using of struct
	if(result.pos != -1)                                                             //logic for printing index position
        { 
		printf("\n string [%s] found at position [%d]",result.string,result.pos);
	}
	else 
	  printf("\n Not Found!!! \n");
	return 0;
}

OUT function(char s1[50], char s2[50])                                                    //logic for strstr without using strstr using struct and pointer
{
	OUT *res,dum;
        res = &dum; 	
	int i=0,j=0,flag=0,counter=0;
	for(i=0;s2[i]!='\0';i++)
	{
		for(j=0;s1[j]!='\0';j++)
		{
			if((s2[i] == s1[j] || (s2[i]+32) == s1[j] || (s2[i]-32) == s1[j]) && flag != 1 && s1[j]!=' ' && s1[j]!='\n' && s2[i]!=' ' && s2[i]!='\n')
			{
				flag=1;
				res->string[counter] = s2[i];
			        res->pos = j+1;	
				counter++;
			}
		}
	}
   	if(flag != 1)
	{
		res->pos = -1;
		return dum;
	}
	else
	  return dum;
}
