/*

2.	Write a C program to compute the monthly pay of 100 employees using each employee‗s name, basic pay. 
The DA is computed as 52% of the basic pay. Gross-salary (basic pay + DA). Print the employees name and gross salary. 

*/

#include<stdio.h>

struct employee
{
    char  emp_name[50];
    float basic_pay;
    float da;
    float gs;
}e1[100];

int main()
{
    int n;
    printf("Enter the vlaue of n");
    scanf("%d", &n);
    
    for(int i=0;i<n;i++)
    {
        printf("Enter the name and the basic pay for the %d employee \n ", i+1);
        scanf("%s", &e1[i].emp_name);
        scanf("%f", &e1[i].basic_pay);
        e1[i].da = 0.52*e1[i].basic_pay;
        e1[i].gs = e1[i].basic_pay + e1[i].da;
    }
    
    printf("\n");
    
    for (int i=0; i<n ; i++)
    {
        printf("the name of the %d employee is %s \n",i+1, e1[i].emp_name);
        printf("the basic pay of the %d employee is %.2f \n",i+1, e1[i].basic_pay);
        printf("the da of the %d on his basic pay is %.2f \n",i+1, e1[i].da);
        printf("the gross sallary of the %d employee is %.2f \n",i+1, e1[i].gs);
        printf("\n");
    }
}

/*


Enter the vlaue of n2
Enter the name and the basic pay for the 1 employee 
 ankit 
12222
Enter the name and the basic pay for the 2 employee 
 shruti
12222

the name of the 1 employee is ankit 
the basic pay of the 1 employee is 12222.00
the da of the 1 on his basic pay is 6355.44
the gross sallary of the 1 employee is 18577.44

the name of the 2 employee is shruti
the basic pay of the 2 employee is 12222.00
the da of the 2 on his basic pay is 6355.44
the gross sallary of the 2 employee is 18577.44


*/