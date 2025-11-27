/*

3.	WAP to read a list of integers and store it in a single dimensional array. 
Write a C program to find the frequency of a particular number in a list of integers.

*/

#include<stdio.h>
int main()
{
    int arr[100];
    int n,num,freq=0;
    printf("Enter the limit of the array \n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number whos frequency is to be calculated \n");
    scanf("%d",&num);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            freq++;
        }
    }
    printf("The frequency of number %d is %d",num,freq);
}


/*

OUTPUT

Enter the limit of the array 
8
1
2
2
3
4
5
6
2
Enter the number whos frequency is to be calculated 
2
The frequency of number 2 is 3

*/