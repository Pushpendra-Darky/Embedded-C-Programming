// q7= Develop a C program to calculate simple interest using the formula I=PTR/100


#include<stdio.h>

int main()

{
        
	float principal,rate,si;                            // declare variable for simple interest, principal value,rate of interest, time in year ,si for simple interest
	int time;


	printf("Enter the value of Principal Amount:\n");
	scanf("%f",&principal);                            // scanining the principal value 

	printf("Enter the Rate Of Interest:\n");          // scaning the rate of interest 
	scanf("%f",&rate);

	printf("Enter the Time(year):\n");
	scanf("%d",&time);                                // scaning the time in integer year


	si = principal*rate*time / 100;                   
	printf("Simple Interest::%f\n",si);               // formula for simple interest and printing it 


	return 0;

}
