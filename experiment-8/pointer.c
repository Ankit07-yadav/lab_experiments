#include<stdio.h>

int main()
{
    int age=19;
    float salary=3333.3;
    char name='a';

    int *page= &age;
    float *psalary= &salary;
    char *pname=&name;

    printf("the value of the age = %d \n",*page);
    printf("The address the age = %x \n",page);
    printf("\n");
    printf("The value of the salary= %f \n",*psalary);
    printf("the address of the salary=%x \n",psalary);
    printf("\n");
    printf("name=%c \n ",*pname);
    printf("the address of the name=%x \n ",pname);
}

/*
OUTPUT

the value of the age = 19 
The address the age = 61ff10 

The value of the salary= 3333.300049
the address of the salary=61ff0c

name=a
 the address of the name=61ff0b
 
 */