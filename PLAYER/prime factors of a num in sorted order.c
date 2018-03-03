#include <stdio.h>
int main() 
{
    int n,i,count=0,j,x;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
	 if(n%i==0)
	 {
	     x=i;
	     count=0;
	     for(j=1;j<=x;j++)
	     {
	         if(x%j==0)
	         {
	             count++;
	         }
	     }
	     if(count==2)
	     {
	         printf("%d ",i);       //prime factors of an number
	     }
	 }
	}

}
