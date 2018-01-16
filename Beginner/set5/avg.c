#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	int arr[10];
	int i,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	sum=sum/n;
	printf("%d",sum);
	return 0;
}
