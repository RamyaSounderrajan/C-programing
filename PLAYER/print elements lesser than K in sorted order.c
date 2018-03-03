#include <stdio.h>
int main()
{
    int n,a[10],b[10],i,k,temp=0,j;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
           
        } 
        if(a[i]<k)
        {
            printf("%d ",a[i]);
        }
    }

}
