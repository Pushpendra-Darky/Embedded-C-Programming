/* q2--  Define structure with two members (one int and other char). Also define union with two members (one int and other char). Print the sizes of structure and union in number of bytes. 
         Initialize union/structures members and print.


 */


#include<stdio.h>
#pragma pack(1)                                                //removing padding and giving actual structer size
struct two_no {                                               //struct define of two no
	int a;
	char c;
}s;                                                           //struct out is s

union two_no1 {                                               // union def of two no
	int b;
	char ch;
}u;                                                          // union out is u

int main()
{
	struct two_no s;;                                    //using struct out
	printf("sizeof(int in struct)=%ld\n",sizeof(s.a) );   //printing size of int in struct
	printf("sizeof(char in struct)=%ld\n",sizeof(s.c) );  //printing size of char in struct
	printf("size of struct %ld\n",sizeof(s));             //printing size of struct
         
	printf("\n");
	union two_no1 u;                                       //using union
        printf("sizeof(int in union)=%ld\n",sizeof(u.b) );     //printing size of int in union
        printf("sizeof(char in union)=%ld\n",sizeof(u.ch) );   //printing size of char in union
	printf("sizeof union %ld\n",sizeof(u));                //printing size of union

	return 0;
}
