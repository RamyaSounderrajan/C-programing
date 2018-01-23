#include<stdio.h>
int main()
{
	int n,i=1;
	scanf("%d",&n);
	while(n>1)
	{
		 i=i*n;
		 n--;
		 
	}
	printf("%d",i);
}
