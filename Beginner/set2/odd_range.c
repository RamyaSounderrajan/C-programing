#include<stdio.h>
int main()
{
	int low,high;
	scanf("%d %d",&low,&high);
	while(low<high)
	{
		if(low%2!=0)
		{
			printf("%d ",low);
		}
		
		low++;
	}
}
