// WAP which reverses every word in the string.


#include  <stdio.h>
#include <string.h>
void main()
{
    char str[50];
    printf ("Enter String : ");
    scanf ("%s", str);
    for (int i = (strlen (str) - 1); i >= 0; i--)
    {
        printf ("%c", str[i]);
    } 
}
