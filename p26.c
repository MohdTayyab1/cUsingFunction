/*) WAP to find out in a[25] how many are positive, how many are negative, how many are
even and how many are odd.
*/
#include<stdio.h>
int main()
{
	int arr[10],i,pos=0,neg=0,zer=0, even=0, odd=0;
	for(i=0;i<10;i++)
	{
		printf("Enter a number : ");
		scanf("%d", &arr[i]);
	}
	for(i=0;i<10;i++)
	{
		if(arr[i]>0)
		{
		    pos++;
		}
		if(arr[i]<0)
		{
		    neg++;
		}
		if(arr[i]==0)
		{
		    zer++;
		}
		if(arr[i]%2==0)
		{
		    even++;
		}
		else
		{
		    odd++;
		}
	}
	printf("\n\nData contain\n %d positive, \n%d negative, \n%d zeroes, \n%d even and \n%d odd numbers",pos,neg,zer, even, odd);
	return 0;
}