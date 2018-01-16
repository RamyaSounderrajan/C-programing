#include<stdio.h>
int main()
{
	int n,i,f1=0,f2=1,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d ",f2);
		sum=f1+f2;
		f1=f2;
		f2=sum;
	}
	
}
