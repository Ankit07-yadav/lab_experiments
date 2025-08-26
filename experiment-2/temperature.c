/*
2.	WAP a C program to Convert temperature from Celsius to Fahrenheit using the formula: F = (C * 9/5) + 32. 
*/

#include<stdio.h>
int main()
{
    int celcius,fahernheit;
    printf("Enter temperature in celcius \n");
    scanf("%d",&celcius);
    fahernheit=((9/5)*celcius)+32;
    printf("Faherheit=%d",fahernheit);
}

/*
PS C:\Users\asus\Desktop\lab_experiment\experiment-2> gcc .\temperature.c -o ./temperature.exe
PS C:\Users\asus\Desktop\lab_experiment\experiment-2> .\temperature.exe
Enter temperature in celcius 
32
Faherheit=64
*/