//19) WAP to fill the entire screen with a smiling face. the smiling face has an ascii value 1.

#include<stdio.h>
int main()
{
    int i;
    char ch=1;

    for(i=0;i<3000;i++)
    {
        printf("%c", ch);
    }
    return 0;
}
