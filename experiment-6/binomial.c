/*

1.	Develop a recursive and non-recursive function FACT(num) to find the factorial of a number, n!,
 defined by FACT(n) = 1, if n = 0. Otherwise, FACT(n) = n * FACT(n-1). Using this function,
 write a C program to compute the binomial coefficient. 
Tabulate the results for different values of n and r with suitable messages. 
*/

#include<stdio.h>

int fact(int num);
    
int r_fact(int num);
    
int binomial(int n, int r, int method);
    
int  main()
{
  int n,r,method;
  printf("Enter the number of n \n");
  scanf("%d",&n);
  printf("Enter the number of r \n");
  scanf("%d",&r);
  printf("Enter 1 for normal method \n");
  printf("Enter 0 for recursive method \n");
  scanf("%d",&method);
   
  if(method==1)
  {
    int result=binomial(n,r,method);
    printf("Binomial coffeciant using normal method= %d", result);
  }
         
  else if(method==0)
  {
    int result=binomial(n,r,method);
     printf("Binomial coffeciant using recusive method= %d", result);
  }
        
  else
  {
    printf("No such method ");
  }
        
}
    
int fact(int num)
{
  int fact=1;
  for(int i=1;i<=num;i++)
  {
    fact=fact*i;   
  }
  return fact;
}
    
int r_fact(int num)
{
   if(num==0)
   {
     return 1;
   }
   else
   {
     return num*r_fact(num-1);
   }
}
    
int binomial(int n, int r , int method)
{
   if(method==1)
   {
     return fact(n)/(fact(r)*fact(n-r));
   }
   else
   {
     return r_fact(n)/(r_fact(r)*r_fact(n-r));
   }
}