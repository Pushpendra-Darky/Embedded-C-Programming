//q6= Write a program to find the area and the perimeter of a circle. 
//Take radius “r” as input.

#include<stdio.h>

int main()

{
	int r;
	float area,perimeter;                             // declare variable  r=radius,area, and perimeter

	printf("Enter the value of radius of cirle:\n");
	scanf("%d",&r);                                  //scaning the radius

	area = 3.14*r*r;                                 // formula for area of circle 3.14 value is for pi
	printf("Area Of Circle:%f\n",area);              //printing the area


	perimeter = 2*3.14*r;                           // formula for perimeter of circle
	printf("Perimeter Of Circle:%f\n",perimeter);   // printing the perimeter

	return 0;

}
