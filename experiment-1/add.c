/*
4.	Write a C program to add two numbers, take number from user.
*/

#include<stdio.h>
int main()
{
    int a,b,sum=0;
    printf("Enter two numbers \n");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("sum of two numbers= %d",sum);
}

/*
PS C:\Users\asus\Desktop\lab_experiment\experiment-1> gcc add.c -o ./add.exe
PS C:\Users\asus\Desktop\lab_experiment\experiment-1> ./add.exe
Enter two numbers 
2 2
sum of two numbers= 4
*/