// q3 - Write a C program to demonstrate double pointer.(Practice all double pointer programs covered in class ppt).


#include<stdio.h>

int main()



//	example 1:                                          // example 1 for double pointer
{
	char ch='A';;                                       // char variable declare
	char *ptr;                                          // char pointer declare
	char **cptr;                                        //char double pointer declare


	ptr=&ch;                                            //passing address of ch to pointer
	cptr=&ptr;                                         // passing address of pointer to double pointer

	printf("\n ch =[%c]\n",ch);                        // printing value from ch
	printf("\n *ptr =[%c]\n",*ptr);                    //printing value in pointer
	printf("\n **cptr =[%c]\n",**cptr);                // printing value in double pointer

	return 0;

}



/*      example 2:                                            //example2 of double pointer

{
	int i= 10;                                            //declare int value
	int *ptr;                                             //int pointer
	int **iptr;                                          //int double poiter

	ptr=&i;                                             //address pass to pointer from i
	iptr=&ptr;                                          //address pass to double pointer from pointer

	printf("\n i=[%d]\n",i);                            //printing value of int
	printf("\n *ptr=[%d]",*ptr);                        //printing value of pointer
	printf("\n **iptr=[%d]",**iptr);                    //printing value of double pointer

	printf("\n address of i is %p\n",i);                //printig address of int
	printf("\n address of *ptr is %p\n",*ptr);           //printing address of pointer
	printf("\n address of **iptr is %p\n",**iptr);       //printing address of double pointer


	return 0;
}

*/

/* example 3                                                //example3 for double pointer
{
	int i = 10;                                        //int value declare
	int *ptr;                                          //int pointer declare
	int **iptr;                                       //int double pointer declare

	ptr=&i;                                         //passing address from i to pointer
	iptr=&ptr;                                      //passing address of pointer to double pointer


	printf("\ni=[%d]\n",i);                        //printing value of i

	*ptr=20;                                      //value 20 is in pointer

	printf("\ni=[%d]\n",i);                       //printig value of i

	**iptr=30;                                    //value 30 is assign in double pointer 

	printf("\ni=[%d]\n",i);                         //printing value in i

	return 0;
}
*/
