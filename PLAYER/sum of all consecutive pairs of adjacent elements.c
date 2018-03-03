#include <stdio.h>
int main(void) 
{
	int a[10],n,sum=0,i,j;
	scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0,j=i+1;i<n,j<n;i++,j++)
    {
        sum=sum+a[i]+a[j];
    }
    printf("%d",sum);

}
