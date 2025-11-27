/*

2.	WAP to read a list of integers and store it in a single dimensional array. 
Write a C program to count and display positive, negative, odd, and even numbers in an array.

*/

#include<stdio.h>
int main()
{
    int arr[100];
    int n,pos=0,neg=0,even=0,odd=0;
    printf("Enter the limit of the array \n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The postive numbers are \n");
    for(int i=0;i<n;i++)
    {
        if(arr[i] >0)
        { 
            printf("%d ",arr[i]);
            pos++;
        }
    }
    printf(" \n Number of postive number = %d \n", pos);
    
    printf("The negative numbers numbers are \n");
    for(int i=0;i<n;i++)
    {
        if(arr[i] < 0)
        { 
            printf("%d ",arr[i]);
            neg++;
        }
    }
    printf("\n Number of negative number = %d \n", neg);
    
    printf("The even numbers are \n");
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        { 
            printf("%d ",arr[i]); 
            even++;
        }
    }
    printf(" \n Number of even number = %d \n", even);
    
    printf("The odd numbers are \n");
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        { 
            printf("%d ",arr[i]);
            odd++;
        }
    }
    printf(" \n Number of postive number = %d \n", odd);
} 

/*

OUTPUT


Enter the limit of the array 
8
1 -1 2 9 -7 6 -4 8
The postive numbers are 
1 2 9 6 8  
 Number of postive number = 5 
The negative numbers numbers are 
-1 -7 -4 
 Number of negative number = 3 
The even numbers are 
2 6 -4 8  
 Number of even number = 4 
The odd numbers are 
1 -1 9 -7  
 Number of postive number = 4 
 
 */