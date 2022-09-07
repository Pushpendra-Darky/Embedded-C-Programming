/* q1-Develop a C program which adds all numbers from 1 to N, except those which are divisible by 5. Implement this using for loop and continue statement. */ 


#include<stdio.h>

int main()

{ 
	int N,i;
	int sum=0;                                                                 // declare variable 

	printf("enter the no which add all no except no which are divide by  5 :");
        scanf("%d",&N);                                                             // scaning the limit n number

	for(i=1;i<=N;i++)
	{

		if((i % 5) == 0)
		{
		   continue;                                                     // skipping the value which is divisible by 5
		}
		else
		{
			sum += i;  //sum=sum+i;
		}
                  		       
	}
	printf("\n Sum = %d\n",sum);                                              // printing the sum

	return 0;

}
