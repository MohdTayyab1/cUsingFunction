//7) WAP to find the reverse of a 4 digit number and compare it to the original number.



#include<stdio.h>
int reverseNum(int n) 
{
  int reverse = 0, remainder;
  while (n != 0) 
  {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }
  if(n==reverse)
    {
        printf("\ntrue\n");
    }
    else 
    {
        printf("\nfalse\n");
    } 
  return reverse;
}
int main()
{
    int n, num;
    printf("Enter the no to be reverse : ");
    scanf("%d",&num);
    n=reverseNum(num);
    printf("reverse no is = %d\n", n);
}
