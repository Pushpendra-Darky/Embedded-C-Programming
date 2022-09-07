//q2= Write a program to demonstrate bitwise operators.

#include<stdio.h>

int main()

{
 
	int A,B,AND,XOR,OR;
	int Choice;
       
	printf("Enter the no of A:\n");
	scanf("%d",&A);                 // input for A

	printf("Enter the no of B:\n");
	scanf("%d",&B);                 // input for B


	printf("CHOICE BIT-WISE OPERATOR:0.AND,1.XOR,2.OR :\n");
	scanf("%d",&Choice);                                     // input choice for operation AND,XOR,OR ie 0,1,2

	AND = A & B;  // AND operation
	XOR = A ^ B;  // EX-OR operation
	OR = A | B;   // OR operataion
        

	if(Choice == 0){
		printf("AND: %d\n",AND); // if 0 i/p printing AND operation
	}
	
	if(Choice == 1){
                 printf("XOR: %d\n",XOR);  // if 1 i/p printing XOR operation
	}
	if(Choice == 2){
		printf("OR: %d\n",OR);  // if 2 i/p printing OR operation
	}
	return 0;
}
