/*Write a program that prints the numbers from 1 to 100. But for multiples of three print
“Obdure” instead of the number and for the multiples of five print “Infotech”. For
numbers which are multiples of both three and five, print “ObdureInfotech”.*/

#include <stdio.h>

int obdurInfotech(int n) 
{
    int i;
    for(i=1; i<=n; i++)
    {
        if(i%15==0)
        {
            printf("\nobdure infotech");
            continue;
        }
        else if(i%3==0)
        {
            printf("\nobdure");
            continue;
        }
        else if(i%5==0)
        {
            printf("\ninfotech");
            continue;
        }
        printf("\n%d",i);
    }
    return 0;
}
int main()
{
    int n=100;
    obdurInfotech(n);
}