/*q1= Develop a C program to perform operations (+,*,-, / and %) on two whole numbers.
Identify suitable data types to represent the numbers and resultant values.*/

#include<stdio.h>

int main()
{
	int A,B,ADD,SUB,MUL,DIV,MOD,RES;
	int ch;

	printf("Enter No Of A:\n");
	scanf("%d",&A);            // inupt from user for a integer digit

	printf("Enter No Of B:\n");
	scanf("%d",&B);            // input from user for b integer input

	printf("\n What Do You Want To Do:: 0. ADD, 1. SUB,2. MUL,3. DIV,4. MOD \n"); // assing no 0 to 1 for add, sub, mul,div,mod respt
	
	scanf("%d",&ch);  //input no for operation from user

	ADD = A + B;  //for adding
        SUB = A - B;  //for subtraction
        MUL = A * B;  //for multiplication
        DIV = A / B;  //for division
        MOD = A % B;  //for modulus


        if(ch == 0){

        	printf("RESULT::%d\n",ADD);  // if 0 i/p printing operation for add
	}
	else if(ch == 1){

                printf("RESULT::%d\n",SUB);  // if 1 i/p printing operation for sub
        }

	else if(ch == 2){

                printf("RESULT::%d\n",MUL);  // if 2 i/p printing operation for mul
        }

	else if(ch == 3){

                printf("RESULT::%d\n",DIV);  // if 3 i/p printing operation for div
        }

	else if(ch ==4){

                printf("RESULT::%d\n",MOD);  // if 4 i/p printing operation for mod
        }

	return 0;
}

