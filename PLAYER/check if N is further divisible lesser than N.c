#include <stdio.h>
int main()
{
    int n,i,count=0;
	scanf("%d",&n);
    for(i=n;i>=2;i--)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count>=2)
    {
        printf("yes..%d is further divisible",n);
    }
    else
    {
        printf("no");
    }
}
