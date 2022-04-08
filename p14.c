//C Program to Print ASCII values using while loop 



#include <stdio.h> 
int main() 
{
    int number=0;
    while(number<=255)
    {
        printf("character = %c\n",number);
        number++;
    }
return(0);
}