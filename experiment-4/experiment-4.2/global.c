/*
1.	Declare a global variable outside all functions and use it inside various functions to understand its accessibility.
*/

#include<stdio.h>

int globalvar=10;

void fun1()
{
    printf("Global variable accessible in function 1 \n");
    printf("%d \n",globalvar);
}

void fun2()
{
    globalvar=globalvar+5;
    printf("Global variable accessible in function 2 \n");
    printf("%d",globalvar);
}

int main()
{
    fun1();
    fun2();
    return 0;
}