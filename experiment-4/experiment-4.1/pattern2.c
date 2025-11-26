/*

b.	 
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1

*/

#include<stdio.h>
int main()
{
    int n;
    int num=1;
    printf("Enter the number of rows \n");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=n-i; j++)
        {
            printf(" ");
        }
        for(int j=0; j<=i; j++)
        {
            if(i==0 || j==0)
            {
            num=1;
            }
            else
            {
            num=num*(i-j+1)/j;
            }
            printf("%4d",num);
        }
        printf("\n");
    }
    return 0;
}