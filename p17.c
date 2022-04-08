/*WAP to find the range of a set of numbers. Orange is the difference between the
smallest and the biggest number in the list.*/
#include<stdio.h>
int findRange()
{
	int i,num,max,min, how, range;
	
	printf("Enter how many number you want to enter : ");
	scanf("%d", &how);
	
	printf("Enter the number : ");
	scanf("%d", &num);
	
	max=min=num;
	
	for( i = 1; i < how; i++)
	{
		printf("Enter the number : ");
		scanf("%d", &num);
		if(num>max)
			max=num;
		if(num<min)
			min=num;
	}
	range = max - min;
	
	printf("\n\n%d is the range of the data.", range);
	return 0;
}
int main()
{
    int n;
    n=findRange();
}