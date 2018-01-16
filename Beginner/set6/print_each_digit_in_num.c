#include<stdio.h>
int main()
{
	int n,i=0,x=0,a[100],j;
	printf("enter the number ");
	scanf("%d",&n);
	while(n>0)
	{
		x=n%10;
		n=n/10;
		a[i]=x;
		i++;
	}
	
	for(j=i-1;j>=0;j--)
	printf("%d ",a[j]);
}
