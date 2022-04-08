//Calculate Factorial, Sum of digits & Reverse a number using recursive and non
//recursive functions.
#include<stdio.h>
long int multiplyNumbers(int n);
int sum_of_digit(int n);
int reverse(int , int );
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld\n", n, multiplyNumbers(n));
    //sum of digit....
    int num;
    printf("enter the value\n");
    scanf("%d",&num);
    int re = sum_of_digit(num);
    printf("Sum of digits in %d is %d\n", num, re);
    //reverse number using recursion
    int number, result;
    printf("Enter number: ");
    scanf("%d", &number);
    /* Second argument must be 0 while calling function */
    result = reverse(number, 0);
    printf("Reverse of %d is %d.", number, result);
    return 0;
}

long int multiplyNumbers(int n) {
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}
int sum_of_digit(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return (n % 10 + sum_of_digit(n / 10));
}
int reverse(int num, int rev)
{
    if(num==0)
    {
        return rev;
    }
    else
    {
        return reverse (num/10, rev*10 + num%10);
    }
}