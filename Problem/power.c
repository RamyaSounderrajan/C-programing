#include<stdio.h>
int main()
{
	int n,i,x=1;
	printf("enter the number");
	scanf("%d",&n);
	if(n<=0)
	{
		printf("enter only number greater than 0");
		return(n);
	}
	if(n==1)
	{
		printf("yes");
	}
	if(n>1)
	{
		while(x<n)
		{
			x=x*2;
		}
		if(x==n)
		printf("yes");
		else
		printf("no");
	}
}
