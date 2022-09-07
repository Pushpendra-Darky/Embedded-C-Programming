//  q3-- Develop programs to demonstrate the functionality of preprocessor operator ## and also conditional compilation.


#include<stdio.h>

#define CAT(a,b) a##b                                    //defining CAT function for concatenation a and b

int main()

{
         // 	int a,b;                                   // not needed 
#ifdef CAT                                                //if defining condition compilation

	printf("%d\n",CAT(10,20));
#else
	printf("\nFunction cat is not defined\n");
#endif                                                   //ending conditional compilation by endif
	return 0;
}
