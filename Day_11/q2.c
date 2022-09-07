// q2-- Write c programs to demonstrate various storages classes.



#include<stdio.h>

extern int e;                                   //extern int declare outside of main

int e;                                          //global extern int
int main()
{
	auto int i;                             //auto variable
	register int r;                         //register variable
	static int s;                          //static variable

	printf("value of int %d\n",i);
	printf("value of register %d\n",r);
	printf("value of static %d\n",s);
	printf("value of extern %d\n",e);
	
	return 0;
}
