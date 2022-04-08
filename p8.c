// biggest of three...
#include <stdio.h>
int biggestOfThree(int a, int b, int c)
{
  if(a>b&a>c)
  {
    printf("biggest is a = %d",a);
  }
  else if(b>a&b>c)
  {
    printf("biggest is b = %d",b);
  }
  else
  {
    printf("biggest is c = %d",c);
  }
}
int main()
{
    int a,b,c;
    printf("\nenter the first value : ");
    scanf("%d\n",&a);
    printf("\nenter the second value : ");
    scanf("%d\n",&b);
    printf("\nenter the third value : ");
    scanf("%d\n",&c);
    biggestOfThree(a,b,c);
}