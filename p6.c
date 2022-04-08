// given year is leap year or not...

#include<stdio.h>
int leapYear(int year)
{
   if (year % 400 == 0) 
   {
      printf("%d is a leap year.", year);
   }
   else if (year % 100 == 0) 
   {
      printf("%d is not a leap year.", year);
   }
   else if (year % 4 == 0) 
   {
      printf("%d is a leap year.", year);
   }
   else {
      printf("%d is not a leap year.", year);
   }
}
int main()
{
    int year;
    printf("Enter the year : ");
    scanf("%d",&year);
    leapYear(year);
    return 0;
}