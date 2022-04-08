//) WAP to find if the number to be searched is present in the array and if yes, then
//display the number of times it appears.

#include<stdio.h>
int searchKey(int n)
{
    int a[10000],i,key,c;
    for(i=0; i<n; i++)
    {
        printf("Enter array elements : ");
        scanf("%d",&a[i]);
    }
     printf("Enter the key : ");
    scanf("%d", &key);
     
    for(i=0; i<n; i++)
    {
        if(a[i]==key)
        {
			c++;
        }
 
    }
	return c;
}
int main()
{
    int a,b;
    printf("Enter the size of an array : ");
    scanf("%d",&a);
    b=searchKey(a);
    printf("key appears in array is = %d ",b);
}