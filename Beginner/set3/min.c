#include<stdio.h>
int main()
{
	int a[10],n,min,i;
	printf("enter n");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf(" min=%d",min);
}
