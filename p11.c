//check given no is prime or not...


#include <stdio.h>

int primeNo(int n)
{
    int c=0;
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            c=1;
            break;
        }
    }
    if(n==1)
    {
        c=1;
    }
    return c;
}
int main()
{
    int num;
    printf("Enter the no : ");
    scanf("%d",&num);
    if(primeNo(num)==0)
    {
        printf("%d is a prime number : ",num);
    }
    else
    {
        printf("%d is not prime number : ",num);
    }
    return 0;
}
