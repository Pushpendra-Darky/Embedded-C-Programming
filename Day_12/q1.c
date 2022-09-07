//  q1-- Write a program to find the volume of a sphere using macros.Pass the radius as the argument to the macro. 



#include<stdio.h>

#define PI 3.14                                                  //defining pi value
#define VOLUME ((4/3)*((PI)*(radius)*(radius)*(radius)))         //defining formula for volume of sphere 
int main()

{
       	float radius;                                           //declare float radius 
       	printf("Enter the radius of a Sphere:");
	scanf("%f",&radius);                                    //getting radius value from user and passing to the macro
	
	printf("\nThe Volume of a Sphere = %.2f\n", VOLUME);    //printing the output

  return 0;
}

