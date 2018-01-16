#include<stdio.h>
int main()
{
	int a[10],n,max,i;
	printf("enter n");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf(" max=%d",max);
}
