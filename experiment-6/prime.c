/*

4.	Develop a C function ISPRIME (num) that accepts an integer argument and returns 1 if the argument is prime, a 0 otherwise. 
Write a C program that invokes this function to generate prime numbers between the given ranges. 

*/

#include<stdio.h>

int isprime(int num);

int main()
{
    int l,u;
    printf("Enter your lower limit \n");
    scanf("%d",&l);
    printf("Enter your upper limit \n");
    scanf("%d",&u);
    
    printf("Prime number between the %d and %d are ", u,l);
    for(int i=l;i<=u;i++)
    {
        int s=isprime(i);
        if(s==1)
        printf("%d \n",i);
    }
}

int isprime(int num)
{   
    int ctr=0;
    for(int i=1; i<=num;i++)
    {
        if(num%i==0)
        ctr++;
    }
    if(ctr==2)
    return 1;
    else
    return 0;
}