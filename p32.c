/*WAP to obtain the transpose of a 4x4 matrix. The transpose of a matrix is obtained by
exchanging the elements of each row with the elements of the corresponding column.
*/

#include <stdio.h>
int main()
{
    int a[4][4];
    int transpose[4][4];
    int i, j, temp;
    printf("enter the value of matrix 'A' 4 by 4: \n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Martix \n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }


    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transpose[j][i] = a[i][j];
        }
    }

    printf("transpose Matrix \n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}