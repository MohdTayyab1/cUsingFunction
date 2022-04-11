// WAP to delete all vowels from a sentence. Assume that the sentence is not more than
// 80 chars long.


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
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            for (j = i; j < len; j++)
            {
                str[j] = str[j + 1];
                

            }
            len--;
        }
    }
    printf("After Removal of vowels: %s", str);
    return 0;
}