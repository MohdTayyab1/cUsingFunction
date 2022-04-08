//WAP to find the reverse of a 4 digit number

#include <stdio.h>

int reverse(int n)
{
  int  reverses = 0, remainder;
  while (n != 0) 
  {
    remainder = n % 10;
    
    reverses = reverses * 10 + remainder;
    n /=10;
  }
  return reverses;
}
int main()
{
    int num, num1;
    printf("Enter the number to be reversed : ");
    scanf("%d",&num);
    num1=reverse(num);
    printf("%d",num1);
}