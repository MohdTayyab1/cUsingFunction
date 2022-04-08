// given no is armstrong or not..


#include <stdio.h>
int armstrongNumber(int num) 
{
    int originalNum, remainder, result = 0;
    originalNum = num;
    while (originalNum != 0) 
    {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
    }

    if (result == num)
    {
        printf("%d is an Armstrong number.", num);
    }
    else
    {
        printf("%d is not an Armstrong number.", num);
    }
    return 0;
}
int main()
{
    int num,n;
    printf("Enter a number: ");
    scanf("%d", &num);
    n=armstrongNumber(num);
}