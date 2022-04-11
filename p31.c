// WAP to pick up the largest number from any 5X5 matrix.


#include <stdio.h>
int main()
{
    int a[5][5];
    int b[5][5];
    int c[5][5];
    int i, j, max=0;
    printf("enter the value of aaray 'A' 5 by 5: ");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter the value of array 'B' 5 by 5: ");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (c[i][j] > max)
            {
                max = c[i][j];
            }
        }
    }
    printf("Largest number: %d", max);
}