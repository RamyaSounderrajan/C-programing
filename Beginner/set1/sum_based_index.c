#include<stdio.h>
int main()
{
	int n,k,i,a[10],sum=0;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<k;i++)
	{
		sum=sum+a[i];
	}
	printf("%d",sum);
}
