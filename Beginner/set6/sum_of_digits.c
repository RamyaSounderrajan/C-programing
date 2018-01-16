#include<stdio.h>
int main()
{
	int n,i=0,x=0,sum=0;
	printf("enter the number ");
	scanf("%d",&n);
	while(n>0)
	{
		x=n%10;
		n=n/10;
		sum=sum+x;
	}
	
	
	printf("%d ",sum);
}



