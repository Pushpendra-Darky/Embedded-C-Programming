#include<stdio.h>

int main()
{
	char chartype;
	int inttype;
	short shorttype;
	float floattype;
	long longtype;
	long long longlongtype;
	double doubletype;
	long double longdoubletype;
	
	printf("size of char = %d ",sizeof(chartype));

	printf("size of short = %d ",sizeof(shorttype));

        printf("size of int = %d ",sizeof(inttype));

        printf("size of long = %d ",sizeof(longtype));
         
        printf("size of long long  = %d ",sizeof(longlongtype));

        printf("size of float = %d ",sizeof(floattype));

        printf("size of double = %d ",sizeof(doubletype));

        printf("size of long double = %d ",sizeof(longdoubletype));
        
	return 0;
}
