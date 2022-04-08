// WAP to print the multiplication table of the number entered by the user.

#include <stdio.h>
int table() 
{
  int n, i;
  printf("Enter an integer: ");
  scanf("%d", &n);
  for (i = 1; i <= 10; ++i) 
  {
    printf("%d * %d = %d \n", n, i, n * i);
  }
}
int main()
{
    int n;
    n=table();
    return 0;
}
