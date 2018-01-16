#include<stdio.h>
#include<string.h>
int main()
{
	int n,k,i=1,x=0;
	scanf("%d",&n);
	scanf("%d",&k);
	while(x<k)
	{
		i=i*2;
		x++;
	}
	printf("%d",i);
}
