/*

1.	WAP to enter numbers till the user wants. At the end, it should display the count of positive, negative, and Zeroes entered.

*/

#include<stdio.h>
int main()
{
    int n,ctr_p=0,ctr_n=0,ctr_z=0;
    printf("Enter the limit \n");           // limits of the number to be entered
    scanf("%d",&n);                         
    printf("Enter the numbers \n");
    for(int i=1; i<=n ; i++)                //loop to enter multiple numbers
    {
        scanf("%d",&i);
        if(i>0)                             // check if the number is +ve
        ctr_p++;
        else if(i<0)                        // check if the number -ve
        ctr_n++;
        else                                // else number is zero
        ctr_z++;;
    }
    printf("Number of the positive numbers= %d \n",ctr_p);
    printf("Number of the negative numbers=%d \n",ctr_n);
    printf("Number of the zeros entered=%d ",ctr_z);
}

/*

OUTPUT

PS C:\Users\asus\Desktop\lab_experiment\experiment-4> gcc count.c -o ./count.exe
PS C:\Users\asus\Desktop\lab_experiment\experiment-4> ./count.exe
Enter the limit 
5 
Enter the numbers 
1
-1
0
-7
5
Number of the positive numbers= 2 
Number of the negative numbers=2
Number of the zeros entered=1


*/