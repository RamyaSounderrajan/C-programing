#include<stdio.h>
int main()
{
	int a[100],n,i,x=0,count=0;
	printf("enter the size of array");
	scanf("%d",&n);
	if(n==0)
	{
		printf("invalid");
		exit(0);
	}
	printf("enter the array");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
    }

			for(i=0;i<n;)
			{
				x=a[i];
				if((x==0) && (i!=(n-1)))
				{
					printf("FALSE");
					exit(1);
				}
				i=i+x;
				if(i==(n-1))
				  {
				  	printf("TRUE");
				  	exit(0);
				  }
			}
			printf("FALSE");
    return(0);
}
