//WAP to print all the prime numbers from 1 to 300
#include<stdio.h>
int main()
{
    int num, max ,i, f;
    printf("Enter the value ",max);
    scanf("%d",&max);
    for(num=1;num<=max;num++)
    {
        f=0;
       
       for(i=2;i<=num/2;i++)
        {
            if(num%i==0)
            {
                f=1;
                break;
            }
        }

        if(f==0 & num!=1)
        {
            printf("%d\t", num);\
        }

    }
    return 0;
}