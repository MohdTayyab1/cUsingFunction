//swap two variable with and without using third veriable veriable

#include<stdio.h> 

int swapNoUsingThirdVeriable(int* a,int* b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
int swapWithoudUsingThirdVeriable(int a, int b)
{
    b=a*b;
    a=b/(a);
    b=b/(a);
}
int main()
{
    int x,y,w,z;
    printf("Enter the first value");
    scanf("%d",&x);
    printf("Enter the second value");
    scanf("%d",&y);
    w=swapNoUsingThirdVeriable(&x,&y);
    printf("swap no using third veriable %d\n%d\n",x,y);
    z=swapWithoudUsingThirdVeriable(x,y);
    printf("swap without using third veriable %d\n%d",x,y);
}