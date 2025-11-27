/*

1.	WAP to read a list of integers and store it in a single dimensional array. 
Write a C program to print the second largest integer in a list of integers.

*/

#include<stdio.h>
int main()
{
    int arr[100];
    int n;
    printf("Enter the size of the array \n");
    scanf("%d",&n);
    printf("Enter the elements in array \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int max=0;

    for(int i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("The greatest number in the array is %d \n", max);
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==max)
        arr[i]=0;
    }
    
   /* for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }*/
    max=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    printf("The second greatest number in the array is %d",max);
}

/*

OUTPUT

PS C:\Users\asus\Desktop\lab_experiment\experiment-5> gcc 2ndlarge.c -o ./2ndlarge.exe 
PS C:\Users\asus\Desktop\lab_experiment\experiment-5> ./2ndlarge.exe
Enter the size of the array 
6
Enter the elements in array 
1 2 3 4 5 5 
The greatest number in the array is 5 
The second greatest number in the array is 4

*/