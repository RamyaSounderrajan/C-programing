#include <stdio.h>
int main() 
{
    int n,a[10],i,j,k;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	   if(a[i]-a[i+1]==k)
	   {
	       printf("%d",a[i]);
	       break;
	   }
	}

}
