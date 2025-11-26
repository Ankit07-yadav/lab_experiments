/*

4.	The population of a town is 100000. The population has increased steadily at the rate of 10% per year for the last 10 years.
 Write a program to determine the population at the end of each year in the last decade.

*/

#include<stdio.h>
int main()
{
    int pop=100000;
    int inc=0;
    for(int i=1; i<=10; i++)
    {
        inc=pop*10/100;
        pop=pop+inc;
        printf("The population in the %d year = %d \n",i,pop);
    }

    return 0;
}

/*

OUTPUT

PS C:\Users\asus\Desktop\lab_experiment\experiment-4\experiment-4.1>  gcc population.c -o ./population.exe
PS C:\Users\asus\Desktop\lab_experiment\experiment-4\experiment-4.1> ./population.exe
The population in the 1 year = 110000 
The population in the 2 year = 121000 
The population in the 3 year = 133100
The population in the 4 year = 146410
The population in the 5 year = 161051
The population in the 6 year = 177156
The population in the 7 year = 194871
The population in the 8 year = 214358
The population in the 9 year = 235793
The population in the 10 year = 259372

*/