// q3-  Write a program to print the prime Fibonacci numbers in a given range.


#include<stdio.h>                                              // non recursive method for fibonscci no it is also  question no 4 non recurive method

int checkPrime(long int);                                     // protype for prime function
int main()

{

        long int f1=0,f2=1,n,i,sum,arr[100],primeCount=0;         // assigning two value for fibonacci series 0 and 1, long int variable is used for long range

        printf("Enter the number range  for fibonacci : ");
        scanf("%ld",&n);                                         // scaning the range for fibonacci

        printf(" %ld  %ld ",f1,f2);                             // printing the initial no for fibonacci series which is 0 and 1
        
        for(i=1;i<=n;i++)
        {
               
                sum=f1+f2;
                f1 = f2;
                f2 = sum;
                printf(" %ld  ",sum);
		if(checkPrime(sum) == 1)                      // calling checkPrime function for checking the no is prime or not in fibonacci 
		{
		  arr[primeCount] = sum;
		  primeCount++;                              // passing the number
		}
                
        }
        printf("\n");
	printf("\nPrime fibonacci numbers in given range are ...\n");
	for(i=0;i<primeCount;i++)
	{
		printf("%ld  ",arr[i]);                   //putting prime no in arr
	}
        printf("\n");
        return 0;


}


int checkPrime(long int num)                     // function for checking prime number
{
	int status=0,count=0,i=1;
	while(i<=num)
	{
	  if(num%i == 0)
	     count++;
	     i++;
	}
	if(count == 2)
	  status =1;

	return status;
}
