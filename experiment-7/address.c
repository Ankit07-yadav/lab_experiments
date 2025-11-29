#include<stdio.h>
#include<string.h>

union address
{   
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];;
    char state[50];
    int zip[10];
}u1;

int main()
{
    strcpy(u1.home_address, "Special wing, Prem Nagar, Dehradun, Uttarakhand - 248007");

    printf("permanent address of the user %s = ", u1.home_address);
}