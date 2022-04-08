//22) Swap the value of two variables using call by value & by reference.



#include<stdio.h> 
void swap(int *,int *);
int swapp( int, int); 
void main( )
{
    int n1,n2,n3,n4;
    printf("Enter the two numbers to be swapped using call by refrence\n");
    scanf("%d%d",&n1,&n2);
    printf("\nThe values of n1 and n2 in the main function before calling the swap function are n1=%d n2=%d",n1,n2);
    swap(&n1,&n2);                                          
    printf("\nThe values of n1 and n2 in the main function after calling the swap function are n1=%d n2=%d",n1,n2);
    printf("Enter the two number to be swapped using call by value\n");
    scanf("%d%d",&n3,n4);
    printf("\nThe values of n3 and n4 in the main function before calling the swap function are n3=%d n4=%d",n3,n4);
    swapp(&n3,n4);
    printf("\nThe values of n3 and n4 in the main function after calling the swap function are n3=%d n4=%d",n3,n4);
    printf("Enter the two number to be swapped\n");
}
 
void swap(int *n1,int *n2)                           
{ 
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
    printf("\nThe values of n1 and n2 in the swap function after swapping are n1=%d n2=%d",*n1,*n2);
}
int swapp(int x, int y)
{
    int temp;  
    temp = x;  
    x    = y;  
    y    = temp;  
    printf("\nAfter swapping: a = %d and b = %d\n", x, y);
}  