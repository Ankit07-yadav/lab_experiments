/*
3.	Write a program that prompts the user to enter their name and age. 
*/

#include<stdio.h>
int main()
{
    char name;
    int age;
    printf("enter your name and age \n");
    scanf("%s",&name);
    scanf("%d",&age);
    printf("Name=%s \n",name);
    printf("Age=%d",age);
}

/*
PS C:\Users\asus\Desktop\lab_experiment\experiment-1> gcc name.c
PS C:\Users\asus\Desktop\lab_experiment\experiment-1> ./name.exe
enter your name and age 
ankit 
18
Name=ankit
Age=18
*/