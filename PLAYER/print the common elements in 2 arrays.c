#include <stdio.h>
int main()
{
    int n,a[10],b[10],i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	    scanf("%d",&b[i]);
	}
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                printf("%d ",a[i]);
                b[j]='+';
                break;
            }
        }
    }
	return 0;
}
