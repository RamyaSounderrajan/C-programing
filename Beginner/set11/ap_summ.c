#include<stdio.h>
int main()
{
	int n,a,d,i,sum=0;
	printf("enter no.of.elements in ap series ");
	scanf("%d",&n);
	printf("enter starting number ");
	scanf("%d",&a);
	printf("enter the difference ");
	scanf("%d",&d);
	for(i=0;i<n;i++)
	{
		sum=sum+a;
		a=a+d;
		
	}
	printf("%d",sum);
}
