// WAP that will read a line and delete from it all the occurrences of the word 'the'

#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, j, len;
    printf("enter the string: ");
    gets(str);
    len = strlen(str);
    for (i = 0; i < len; i++)
    {
        if (str[i] == 't' && str[i + 1] == 'h' && str[i + 2] == 'e')
        {
            for (j = i; j < len; j++)
            {
                str[j] = str[j + 1];
            }
            len--;
        }
    }
    printf("Remove the word from line : %s", str);
    return 0;
}