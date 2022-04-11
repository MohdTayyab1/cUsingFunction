// WAP to count the number of times every character occurs in the string.


#include<stdio.h>
#include <string.h>
 
int check(char *s,char c)
{
    int i,count=0;
     for(i=0;s[i];i++)  
    {
    	if(s[i]==c)
    	{
          count++;
		}
 	}
 	return count;	  
 }
int main()
{ 
    char s[1000],c;
	int count=0;  
    printf("Enter  the string : ");
    scanf("%s",&s);
    printf("Enter character to be searched: ");
    scanf("%s",&c);
    count=check(s,c);
    printf("character '%c' occurs %d times \n ",c,count);
 
	return 0;
}