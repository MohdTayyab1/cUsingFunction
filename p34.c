//WAP to multiply any two 3x3 matrices.


#include<stdio.h>
void main(){
    int x[3][3];
    int y[3][3];
    int z[3][3];
    int i, j;
    printf("enter the value of matrix 'X' 3 by 3: \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &x[i][j]);
        }
    }
    printf("enter the value of matrix 'Y' 3 by 3: \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &y[i][j]);
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            z[i][j] = x[i][j] * y[i][j];
        }
    }
    printf("Multiplication of martix 'X' and 'Y' is here\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d\t", x[i][j]);
        }
        printf("\n");
    }
}