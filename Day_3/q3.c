// q3-Write a program to find whether given number is palindrome or not.



#include<stdio.h>


int main()

{
	int num,rev = 0,orig;
	int rem;

	printf("Enter the no to check no is palindrome or not:\num");
	scanf("%d",&num);                                             //scaning the no for palindrome

	orig = num;

	while (num != 0)                                             //reversing the no
         {
	 rem = num % 10;
	 rev = (rev * 10) + rem;
	 num = num / 10 ;

	 }

	 if ( orig == rev)                                          // if reversing no and original no are same then it execute  otherwise else
	 {
	 printf("%d is a palidrome number.\n",num);
	 }
	 else                                                
	  printf("%d is not a palindrome number.\n",num);

	return 0;

}
