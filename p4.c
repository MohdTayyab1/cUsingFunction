//WAP to find the sum of the digits of a 4 digit number


#include <stdio.h>
int sumOfDigit(int n)
{
  int x ,i ,r=0 ;
  for (i=1;i<5;i++)
  {
      x = n%10;
      n=n/10;
      r=r+x;
  }
  return r;
}
int main()
{
    int num, n;
    printf("Enter the four digit number : ");
    scanf("%d",&num);
    n=sumOfDigit(num);
    printf("sum of digit is = %d\n",n);
}