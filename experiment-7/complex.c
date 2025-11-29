/*

1.	Write a C program that uses functions to perform the following operations: 
a.	Reading a complex number. 
b.	Writing a complex number. 
c.	Addition and subtraction of two complex numbers 
Note: represent complex number using a structure. 


*/

#include<stdio.h>

struct  complex
{
    float real; 
    float imag;

}c1,c2;

int main()
{
    float sum1, sum2;

    printf("COMPLEX NUMBER= a+bi\n");                           
    printf("a=real part \t b=imaginary part \t i=imaginary unit \n");       // COMPLEX NUMBER BREAKDOWN 
    printf("Enter real part of the first number \n");           // INPUT OF THE FIRST NUMBER 
    scanf("%f", &c1.real);
    printf("Enter imaginary part of the first number \n");
    scanf("%f", &c1.imag);
    printf("The first complex number is = %.1f+%.1fi \n", c1.real, c1.imag);

    printf("Enter the real part of the second number \n");                // INPUT OF THE SECOND NUMBER 
    scanf("%f", &c2.real);
    printf("Enter the imaginary part of the second number \n");
    scanf("%f", &c2.imag);
    printf("The second complex number is = %.1f+%.1fi \n", c2.real, c2.imag);

    sum1=c1.real + c2.real;                                         // SUM OF THE REAL VALUES 
    sum2=c1.imag + c2.imag;                                         // SUM OF THE IMAGINARY VALUES 

    printf("the sum of the two complex number are %.1f+%.1fi", sum1,sum2);
}


/*

COMPLEX NUMBER= a+bi
a=real part      b=imaginary part        i=imaginary unit 
Enter real part of the first number
3.0
Enter imaginary part of the first number
4.0
The first complex number is = 3.0+4.0i
Enter the real part of the second number
1.0
Enter the imaginary part of the second number
2.0
The second complex number is = 1.0+2.0i
the sum of the two complex number are 4.0+6.0i

*/