/*If a five-digit number is input through the keyboard, write a program to print a new
number by adding one to each of its digits. 
For example if the number that is input is 12391 then the output should be displayed
as 23402.
*/

#include<stdio.h>
int digitPluseOne (int num)
{
  int sum, i, number, count = 0, n = 1;
  number = num;
  while (number != 0)
    {
      number = number / 10;
      count = count + 1;
    }
  for (i = 1; i < count; i++)
    {
      n = n * 10;
      n = n + 1;
    }
  sum = num + n;
  return sum;
}

int
main ()
{
  int num, n;
  printf ("Enter the number : ");
  scanf ("%d", &num);
  n = digitPluseOne (num);
  printf ("Digit pluse one is = %d", n);
}
