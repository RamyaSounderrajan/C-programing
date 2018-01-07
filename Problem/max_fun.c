#include<stdio.h>
int maxnum(int a[],int n)
{
	int max=a[0];
	int i;
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	return(max);
}

int main()
{
	int a[100],n,x,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	x=maxnum(a,n);
	printf("%d",x);
}
