#include<stdio.h>
int main()
{
	int n,low,high;
	scanf("%d",&low);
	scanf("%d",&high);
	scanf("%d",&n);
	if((n>=low) && (n<=high))
	{
		printf("number included");
	}
	else
	{
		printf("not included");
	}
}
