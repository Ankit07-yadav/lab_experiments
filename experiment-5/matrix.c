/*

4.	WAP that reads two matrices A (m x n) and B (p x q) and computes the product A and B.
 Read matrix A and matrix B in row major order respectively.
  Print both the input matrices and resultant matrix with suitable headings and output should be in matrix format only.
   Program must check the compatibility of orders of the matrices for multiplication. 
Report appropriate message in case of incompatibility.

*/
#include<stdio.h>
int  main()
{
    int m,n,p,q;
    printf("Enter the number of rows and columns for 1st matrix \n");
    scanf("%d %d",&m,&n);
    printf("Enter the number of rows and columns for 2nd matrix \n");
    scanf("%d %d",&p,&q);
    
    if(n!=p)
    {
        printf("Matrix multiplication not possible \n ");
    }
    else
    {
    
    int arr1[m][n];
    int arr2[p][q];
    
    printf("Enter the elements in first array \n");
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    
     
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    
    printf("Enter the elements in second array \n");
    
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    
     
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    
    int arr3[m][q];
    int sum=0;
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            for(int k=0;k<n;k++)
            {
                sum= sum+arr1[i][k]*arr2[k][j];
            }
            arr3[i][j]=sum;
            sum=0;
        }
    }
    
    printf("the resultant matrix= \n");
    
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
    }
return 0;
}

/*

OUTPUT

PS C:\Users\asus\Desktop\lab_experiment\experiment-5> gcc matrix.c -o ./matrix.exe
PS C:\Users\asus\Desktop\lab_experiment\experiment-5> ./matrix.exe
Enter the number of rows and columns for 1st matrix 
2 2
Enter the number of rows and columns for 2nd matrix 
2 2
Enter the elements in first array 
1 2 1 2
1 2 
1 2
Enter the elements in second array
1 2 1 2
1 2 
1 2
the resultant matrix=
3 6
3 6

*/