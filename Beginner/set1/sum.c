#include<stdio.h>
int main()
{
	int n,sum,sum1,i,x;
	scanf("%d",&n);
	sum=(n*(n+1))/2;
	printf("%d\n",sum);
	//using for loop
	
	for(i=1;i<=n;i++)
	sum1=sum1+i;
	printf("%d",sum1);
}
	
