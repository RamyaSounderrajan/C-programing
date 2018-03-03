#include <stdio.h>
int main() 
{
	int l,r,gcd,num,i;
	scanf("%d %d",&l,&r);
	for(i=1;i<=l && i<=r;i++)
	{
	    if(l%i==0 && r%i==0)
	    {
	        gcd=i;
	    }
	}
	num=(l*r)/gcd;
	printf("%d",num);

}
