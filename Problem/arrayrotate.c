#include<stdio.h>
int main()
{
	int n,k,i,x,temp,d=0;
	printf("enter n");
	scanf("%d",&n);
	printf("enter k");
	scanf("%d",&k);
	int a[n];
	printf("enter array elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	x=0;
	while(x<k)
	{
		temp=a[d];
	    for(i=0;i<n-1;i++)
			a[i]=a[i+1];
			a[n-1]=temp;	
		x++;
   }
   printf("the new shifted array is");
   for(i=0;i<n;i++)
	printf("%d ",a[i]);
	return(0);
}
