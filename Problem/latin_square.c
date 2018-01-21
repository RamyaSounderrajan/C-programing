#include<stdio.h>
int main()
{
	int n,k,i,x,temp,d;
	printf("enter n ");
	scanf("%d",&n);
	k=n;
	d=n-1;
	int a[n];
	for(i=0;i<n;i++)
	{
		a[i]=i+1;
		printf("%d ",a[i]);	
	}
	printf("\n");
	x=0;
	while(x<n-1)
	{
		temp=a[d];
	    for(i=d;i>0;i--)
	    {
	    	a[i]=a[i-1];
		}
		a[0]=temp;
		for(i=0;i<k;i++)
			printf("%d ",a[i]);	
		printf("\n");	
		x++;
   }
	return(0);
}
