// WAP is a program to add two 6x6 matrices.



#include<stdio.h>
int main()
{
    int a[6][6];
    int b[6][6];
    int c[6][6];
    int i, j;
    printf("enter the value of aaray 'A' 5 by 5: ");
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter the value of array 'B' 5 by 5: ");
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for(i=0; i<6; i++){
        for(j=0; j<6; j++){
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }