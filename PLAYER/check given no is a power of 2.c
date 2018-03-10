#include <stdio.h>
int main()
{
	int n,i,p=2,result=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    result=result*p;
	    if(result==n)
	    {
	        printf("yes");
	        break;
	    }
	    else
	    {
	        continue;
	    }
	}
	if(result!=n)
	{
	    printf("no");
	}

}
