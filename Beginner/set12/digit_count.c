#include<stdio.h>
int main()
{
	int n,count=1,i;
	scanf("%d",&n);
    	i=n;
	while(i>=10)
	{
		i=i/10;
		count++;
	}

	printf("the no of digts in %d is %d",n,count);
}
