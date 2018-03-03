#include <stdio.h>
int main()
{
	int n,rem=0,k,count=0;
	scanf("%d %d",&n,&k);
	while(n!=0)
	{
	    rem=n%10;
	    if(rem==k)
	    {
	        count++;
	    }
	    n=n/10;
	}
	printf("%d",count);

}
