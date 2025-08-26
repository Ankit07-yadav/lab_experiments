/*
1.	WAP a C program to calculate the area and perimeter of a rectangle based on its length and width. 
*/

#include<stdio.h>
int main()
{
    int len,bre;
    printf("Enter length and breadth of the rectangle \n");
    scanf("%d %d",&len,&bre);
    int Area=len*bre;
    int Perimeter=2*(len+bre);
    printf("Area=%d,",Area);
    printf("Perimeter=%d",Perimeter);
}

/*
PS C:\Users\asus\Desktop\lab_experiment\experiment-2> gcc rectangle.c -o ./rectangle.exe
PS C:\Users\asus\Desktop\lab_experiment\experiment-2> ./rectangle.exe
Enter length and breadth of the rectangle 
10 10
Area=100,Perimeter=40
*/