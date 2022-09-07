// q3-- Define a structure “complex” (use typedef) to read two complex numbers and perform addition, subtraction of these two complex numbers and display the result.




#include <stdio.h>

typedef struct complex {                                       //typedef struct dec for complex no
    float real;
    float imag;
} complex;                                                     //output using for typedef is complex

complex add(complex n1, complex n2);                           // prototype of complex function

int main()

{
    complex n1, n2, result;                                   

    printf("For 1st complex number \n");
    printf("Enter the real and imaginary parts: \n");
    scanf("%f %f", &n1.real, &n1.imag);                    //scanning first real and imaginary no

    printf("\nFor 2nd complex number \n");
    printf("Enter the real and imaginary parts: \n");
    scanf("%f %f", &n2.real, &n2.imag);                    //scanning 2nd real and imaginary no

    result = add(n1, n2);                                  //calling function add placing in result variable

    printf("Sum = %.1f + %.1fi\n", result.real, result.imag);   //printing the sum of real and imaginary no
    return 0;
}

complex add(complex n1, complex n2)                        //complex function definition
{
    complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return (temp);
}

