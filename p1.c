//calculate area and perimeter of rectangle..

#include<stdio.h>
int area(int a, int b)
{
    int c;
    c=a*b;
    return c;
}
int perimeter(int a, int b)
{
    int f;
    f=2*(a+b);
    return f;
}
int main()
{
    int length,breadth,x,y;
    printf("Enter the value of length : ");
    scanf("%d",&length);
    printf("Enter the value breadth : ");
    scanf("%d",&breadth);  
    x=area(length,breadth);
    y=perimeter(length,breadth);
    printf("area of rectangle is = %d\nperimeter of rectangle is = %d",x,y);
    return 0;  
}