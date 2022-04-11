// WAP that will read a line and replace all spaces with "0x20".


#include <stdio.h>
#include <string.h>
char *remove_white_spaces(char *str)
{
	int i = 0, j = 0;
	int len=strlen(str);
	for (i=0; i<len; i++)
	{
		if (str[i] == " ")
		{
          continue;
		}
	}
	return str;
}

int main()
{
	char str[50];
    printf("\n\t Enter a string : ");
	scanf("%s",&str);
	remove_white_spaces(str);
	printf("%s",str);
	return 0;
}