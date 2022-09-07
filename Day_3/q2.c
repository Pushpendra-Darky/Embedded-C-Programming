// q2- Develop a C program to find sum of all odd numbers upto N using while loop.



#include<stdio.h>

int main()

{
	int N,i=0,sum=0;

	printf("Enter the max no for finding sum of odd no:");
	scanf("%d",&N);                                          // scaning the input n no 

	while(i<=N)
	{
		if( (i % 2) == 0 )
		{
			i++;                       //i++
			continue;                  //if we are not using continue statement then we should add above and lower comment i++ in loop that will work too
			                           // neglecting even no
		}
                 else
		 {
			 sum +=i;                   // sum= sum+ i and increasing i++ till N
			 i++;                       //i++ 
		 }
	}                                           //i++   
         printf("sum of odd no:%d\n",sum);             // printing the sum of odd no
       

	return 0;

}
