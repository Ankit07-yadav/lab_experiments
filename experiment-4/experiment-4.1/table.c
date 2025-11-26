/*
2.	WAP to print the multiplication table of the number entered by the user. It should be in the correct formatting.   Num * 1 = Num 
*/

#include<stdio.h>
int main()
{
    int num,mul;
    printf("Enter a number \n");
    scanf("%d",&num);
    for(int i=1; i<=10; i++)
    {
        mul=1;
        mul=num*i;
        printf("%d * %d = %d \n",num,i,mul);
    }
    return 0;
}

/*


OUTPUT

PS C:\Users\asus\Desktop\lab_experiment\experiment-4\experiment-4.1> gcc table.c -o ./table.exe
PS C:\Users\asus\Desktop\lab_experiment\experiment-4\experiment-4.1> ./table.exe
Enter a number 
3
3 * 1 = 3 
3 * 2 = 6 
3 * 3 = 9 
3 * 4 = 12
3 * 5 = 15
3 * 6 = 18
3 * 7 = 21
3 * 8 = 24
3 * 9 = 27
3 * 10 = 30

*/