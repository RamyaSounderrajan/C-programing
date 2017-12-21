#include<stdio.h>
#include<string.h>
int main()
{
	int count,i,j,n,x=0,index;
	char a[100];
	printf("enter string\n");
	scanf("%s",a);
	n=strlen(a);
	if(n==1)
	{
		printf("%c occurs %d times",a[0],n);
	}
	if(n>1)
	{
		for(i=0;i<n;i++)
		{
			count=0;
			for(j=0;j<n;j++)
			{
				if(a[i]==a[j])
	            count++;
			}
			if(count>x)
			{
			x=count;
			index=i;
		    }
	    }
	    printf("%c occured %d times",a[index],x);
	}
}
