

#include <stdio.h>
int uniqueNoInArray(int n)
{
    int a[10000],b[10000],i,j,c=0 ;
    for(i=0; i<n; i++)
    {
        printf("Enter elements in array : ");
        scanf("%d",&a[i]);
    }
    
  for(i=0; i<n; i++)
    {
        c=1;
        if(a[i]!=-1)
		{
		    for(j=i+1; j<n; j++)
            {
        	   if(a[i]==a[j])
        	    {
                    c++;
			        a[j]=-1;
		       }
	       }
	       b[i]=c;
		}
    }       
 for(i=0; i<n; i++)
    {
         if(a[i]!=-1)
        {
        	if(b[i]==1)
            {
                printf("unoque element in an array = %d\n",a[i]);

            }
		} 
    }    
}
int main()
{
    int n,result;
    printf("Enter size of the array : ");
    scanf("%d", &n);
    uniqueNoInArray(n);
}