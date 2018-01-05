#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	signed int d;
	int a[n],i,j,diff,x,index_i,index_j;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	d=a[0]-a[1];
	if(d==0)
	{
		printf("the minimum diff is zero");
		exit(0);
	}
	else if(d<0)
	{
		d*=-1;
		diff=d;
	}
	else{
		diff=d;
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			x=a[i]-a[j];
			if(x<0)
			x*=-1;
			if(x<diff)
			{
				diff=x;
				index_i=i;
				index_j=j;
			}
			
		}
	}
	printf("the minimum diff is %d between %d and %d",diff,a[index_i],a[index_j]);
}
