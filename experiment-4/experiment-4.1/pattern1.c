/*

3.	WAP to generate the following set of output.

a.	
    1
   2 3
  4 5 6

*/

#include<stdio.h>
int main()
{
    int n,num=1;
    printf("Enter the numbers of rows \n");
    scanf("%d",&n);

    // pattern-1 (PYRAMID)
    for(int i=1; i<=n ; i++)                //  for loop for the rows 
    {
        for(int j=1; j<=n-i; j++)           // loop  for spaces from left to right until a number is prrinted(for n=3; j=3-1=2 therefore 2 spaces are printed)
        {
            printf(" ");
        }
        for(int j=1; j<=i; j++)            // loop to print the numbers  
        {
            printf("%d ",num);
            num++;
        }
        for(int j=1; j<=n-i; j++)          // loop to print the spaces after a number is printed 
        {
            printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    //pattern 2 (Right angled triangle)
    num=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
    
    printf("\n");

    //pattern 3 (Diamond)

    num=1;

    for(int i=1; i<=n ; i++)                //  for loop for the rows 
    {
        for(int j=1; j<=n-i; j++)           // loop  for spaces from left to right until a number is prrinted(for n=3; j=3-1=2 therefore 2 spaces are printed)
        {
            printf(" ");
        }
        for(int j=1; j<=i; j++)            // loop to print the numbers  
        {
            printf("%d ",num);
            num++;
        }
        for(int j=1; j<=n-i; j++)          // loop to print the spaces after a number is printed 
        {
            printf(" ");
        }
        printf("\n");
    }
    for(int i=n-1;i>=1;i--)             // print the reverse of the first loop 
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%d ",num);
            num--;
        }
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}

/*

OUTPUT

PS C:\Users\asus\Desktop\lab_experiment\experiment-4\experiment-4.1> gcc pattern1.c -o ./pattern1.exe
PS C:\Users\asus\Desktop\lab_experiment\experiment-4\experiment-4.1> ./pattern1.exe
Enter the numbers of rows 
5
    1     
   2 3
  4 5 6
 7 8 9 10
11 12 13 14 15

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

    1     
   2 3
  4 5 6
 7 8 9 10
11 12 13 14 15
 16 15 14 13
  12 11 10
   9 8
    7

    
*/