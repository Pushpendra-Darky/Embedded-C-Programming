// q4- Take the range of numbers as input and print all the prime Fibonacci numbers as output. Use Functions. Try with non-recursive and recursive functions.



#include<stdio.h>
 
int fibonacci(int n);                                     //in previous  question i did non recursive fibonacci in this i use recursive fibonacci, and using two method, method 1 prototying
int fibonacci_1(int);                                     // prototype for method 2 for fibonacci series
int checkPrime(int );
int main()
{
	int n,i,f1=0,f2=1;                                // f1 and f2 for 2nd method initial values for fibonacci                              

	printf("Enter the range for fibonacci number\n");
	scanf("%d",&n);
        printf("\n Logic 1..\n");                          // method 1 
	printf("%d %d ",f1,f2);
	for(i=0;i<n;i++)
	{
		if(checkPrime(fibonacci(i)) == 1)          //calling prime no function in fibonacci funtion
		{
                   printf("%d ",fibonacci(i));             // printing fibonacci function from method 1
	        }
  	}
        printf("\n");

	//method 2 for fibonacci                         
	printf("\n Logic 2..\n");
        printf("%d %d ",f1,f2);                          // printing the initial value 0 and 1
        fibonacci_1(n-2);                                // calling fibonacci funtion method 2
	printf("\n");
        return 0;
}

int fibonacci(int n)                                    // method 1 for fibonacci
{
	int i=0;
	if(n==0)
	 return 0;
	if(n==1)
	 return 1;
	else
	 return (fibonacci(n-1)+fibonacci(n-2));
}
// method 2 for fibonacci

int fibonacci_1(int n)
{
	static int n1=0,n2=1,n3;

	if(n>0)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
		if(checkPrime(n3) == 1)
		  printf("%d ",n3);
		fibonacci_1(n-1);
	}

}

//checking no is prime 
int checkPrime(int num)
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
